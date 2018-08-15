#include "QT_ASM_Converter.h"

QT_ASM_Converter::QT_ASM_Converter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Set_SLOT();

	ui.X86_radioButton->setChecked(true);
}

void QT_ASM_Converter::Set_SLOT()
{
	connect(ui.ASM_TO_HEX_pushButton, SIGNAL(clicked()), this, SLOT(SLOT_ASM_TO_HEX()));
}

void QT_ASM_Converter::SLOT_ASM_TO_HEX()
{
	std::vector<std::string> temp_vector = _Text.Split(ui.ASM_textEdit->toPlainText().toStdString(), "\n");
	std::string out_str;
	if (temp_vector.size() == 0)
	{
		return;
	}
	for (auto x: temp_vector)
	{
		XEDPARSE parse;
		RtlZeroMemory(&parse, sizeof(parse));
		if (ui.X86_radioButton->isChecked())
		{
			parse.x64 = false;
		}
		else
		{
			parse.x64 = true;
		}
		RtlCopyMemory(parse.instr, x.data(), x.length());
		if (XEDParseAssemble(&parse) == XEDPARSE_OK)
		{
			out_str += _Text.String_TO_HEX(std::string((char*)parse.dest, parse.dest_size), true);
			out_str += "\n";
		}
	}
	ui.Hex_textEdit->setPlainText(out_str.data());
}