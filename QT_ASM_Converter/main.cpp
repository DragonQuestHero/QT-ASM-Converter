#include "QT_ASM_Converter.h"
#include <QtWidgets/QApplication>

#ifdef NDEBUG
#include <QtPlugin>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#endif // DEBUG

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_ASM_Converter w;
	w.show();
	w.setFixedSize(w.width(), w.height());
	return a.exec();
}
