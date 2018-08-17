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
	connect(ui.HEX_TO_ASM_pushButton, SIGNAL(clicked()), this, SLOT(SLOT_HEX_TO_ASM()));
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

void QT_ASM_Converter::SLOT_HEX_TO_ASM()
{
	std::string temp_str = ui.Hex_textEdit->toPlainText().toStdString();
	std::string relust_str;
	temp_str = _Text.Replace(temp_str, " ", "");
	temp_str = _Text.Replace(temp_str, "\n", "");
	temp_str = _Text.Replace(temp_str, "\\x", "");
	temp_str = _Text.Replace(temp_str, "0x", "");

	temp_str = _Text.HEX_TO_String(temp_str);

	ZydisDecoder decoder;
	if (ui.X86_radioButton->isChecked())
	{
		ZydisDecoderInit(
			&decoder,
			ZYDIS_MACHINE_MODE_LONG_COMPAT_32,
			ZYDIS_ADDRESS_WIDTH_32);
	}
	else
	{
		ZydisDecoderInit(
			&decoder,
			ZYDIS_MACHINE_MODE_LONG_64,
			ZYDIS_ADDRESS_WIDTH_64);
	}
	ZydisFormatter formatter;
	ZydisFormatterInit(&formatter, ZYDIS_FORMATTER_STYLE_INTEL);
	uint64_t instructionPointer = 0;
	size_t offset = 0;
	ZydisDecodedInstruction instruction;
	while (ZYDIS_SUCCESS(ZydisDecoderDecodeBuffer(
		&decoder, temp_str.data() + offset, temp_str.length() - offset,
		instructionPointer, &instruction)))
	{
		// Format & print the binary instruction
		// structure to human readable format.
		char buffer[256];
		ZydisFormatterFormatInstruction(
			&formatter, &instruction, buffer, sizeof(buffer));
		relust_str += buffer + std::string("\n");

		offset += instruction.length;
		instructionPointer += instruction.length;
	}
	ui.ASM_textEdit->setPlainText(relust_str.data());
}