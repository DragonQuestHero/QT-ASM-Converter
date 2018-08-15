#include "QT_ASM_Converter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_ASM_Converter w;
	w.show();
	w.setFixedSize(w.width(), w.height());
	return a.exec();
}
