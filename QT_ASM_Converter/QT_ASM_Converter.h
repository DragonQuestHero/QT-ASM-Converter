#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_ASM_Converter.h"

#include "XEDParse/XEDParse.h"
#include "CGLIB/CGLIB_String_Text.hpp"

class QT_ASM_Converter : public QMainWindow
{
	Q_OBJECT

public:
	QT_ASM_Converter(QWidget *parent = Q_NULLPTR);
public slots:
	void SLOT_ASM_TO_HEX();
private:
	void Set_SLOT();
private:
	Ui::QT_ASM_ConverterClass ui;
	CGLIB_String_Text _Text;
};
