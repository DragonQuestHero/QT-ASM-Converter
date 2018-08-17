/********************************************************************************
** Form generated from reading UI file 'QT_ASM_Converter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_ASM_CONVERTER_H
#define UI_QT_ASM_CONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_ASM_ConverterClass
{
public:
    QWidget *centralWidget;
    QRadioButton *X86_radioButton;
    QRadioButton *X64_radioButton;
    QTextEdit *ASM_textEdit;
    QPushButton *ASM_TO_HEX_pushButton;
    QTextEdit *Hex_textEdit;
    QCheckBox *Point_checkBox;
    QPushButton *HEX_TO_ASM_pushButton;
    QCheckBox *AddX_checkBox;
    QRadioButton *Blank_radioButton;
    QRadioButton *Tabs_radioButton;
    QRadioButton *Add0X_radioButton;
    QRadioButton *AddX_radioButton;
    QRadioButton *Hex_radioButton;
    QRadioButton *Dec_radioButton;
    QCheckBox *Radix_checkBox;

    void setupUi(QMainWindow *QT_ASM_ConverterClass)
    {
        if (QT_ASM_ConverterClass->objectName().isEmpty())
            QT_ASM_ConverterClass->setObjectName(QStringLiteral("QT_ASM_ConverterClass"));
        QT_ASM_ConverterClass->resize(640, 229);
        QIcon icon;
        icon.addFile(QStringLiteral("mywife.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QT_ASM_ConverterClass->setWindowIcon(icon);
        centralWidget = new QWidget(QT_ASM_ConverterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        X86_radioButton = new QRadioButton(centralWidget);
        X86_radioButton->setObjectName(QStringLiteral("X86_radioButton"));
        X86_radioButton->setGeometry(QRect(270, 20, 89, 16));
        X64_radioButton = new QRadioButton(centralWidget);
        X64_radioButton->setObjectName(QStringLiteral("X64_radioButton"));
        X64_radioButton->setGeometry(QRect(330, 20, 89, 16));
        ASM_textEdit = new QTextEdit(centralWidget);
        ASM_textEdit->setObjectName(QStringLiteral("ASM_textEdit"));
        ASM_textEdit->setGeometry(QRect(10, 10, 251, 211));
        ASM_TO_HEX_pushButton = new QPushButton(centralWidget);
        ASM_TO_HEX_pushButton->setObjectName(QStringLiteral("ASM_TO_HEX_pushButton"));
        ASM_TO_HEX_pushButton->setGeometry(QRect(270, 160, 91, 23));
        Hex_textEdit = new QTextEdit(centralWidget);
        Hex_textEdit->setObjectName(QStringLiteral("Hex_textEdit"));
        Hex_textEdit->setGeometry(QRect(380, 10, 251, 211));
        Point_checkBox = new QCheckBox(centralWidget);
        Point_checkBox->setObjectName(QStringLiteral("Point_checkBox"));
        Point_checkBox->setEnabled(false);
        Point_checkBox->setGeometry(QRect(270, 80, 71, 16));
        HEX_TO_ASM_pushButton = new QPushButton(centralWidget);
        HEX_TO_ASM_pushButton->setObjectName(QStringLiteral("HEX_TO_ASM_pushButton"));
        HEX_TO_ASM_pushButton->setGeometry(QRect(270, 190, 91, 23));
        AddX_checkBox = new QCheckBox(centralWidget);
        AddX_checkBox->setObjectName(QStringLiteral("AddX_checkBox"));
        AddX_checkBox->setEnabled(false);
        AddX_checkBox->setGeometry(QRect(270, 120, 91, 16));
        Blank_radioButton = new QRadioButton(centralWidget);
        Blank_radioButton->setObjectName(QStringLiteral("Blank_radioButton"));
        Blank_radioButton->setEnabled(false);
        Blank_radioButton->setGeometry(QRect(330, 100, 51, 16));
        Tabs_radioButton = new QRadioButton(centralWidget);
        Tabs_radioButton->setObjectName(QStringLiteral("Tabs_radioButton"));
        Tabs_radioButton->setEnabled(false);
        Tabs_radioButton->setGeometry(QRect(270, 100, 61, 16));
        Add0X_radioButton = new QRadioButton(centralWidget);
        Add0X_radioButton->setObjectName(QStringLiteral("Add0X_radioButton"));
        Add0X_radioButton->setEnabled(false);
        Add0X_radioButton->setGeometry(QRect(330, 140, 51, 16));
        AddX_radioButton = new QRadioButton(centralWidget);
        AddX_radioButton->setObjectName(QStringLiteral("AddX_radioButton"));
        AddX_radioButton->setEnabled(false);
        AddX_radioButton->setGeometry(QRect(270, 140, 61, 16));
        Hex_radioButton = new QRadioButton(centralWidget);
        Hex_radioButton->setObjectName(QStringLiteral("Hex_radioButton"));
        Hex_radioButton->setEnabled(false);
        Hex_radioButton->setGeometry(QRect(270, 60, 61, 16));
        Dec_radioButton = new QRadioButton(centralWidget);
        Dec_radioButton->setObjectName(QStringLiteral("Dec_radioButton"));
        Dec_radioButton->setEnabled(false);
        Dec_radioButton->setGeometry(QRect(330, 60, 51, 16));
        Radix_checkBox = new QCheckBox(centralWidget);
        Radix_checkBox->setObjectName(QStringLiteral("Radix_checkBox"));
        Radix_checkBox->setEnabled(false);
        Radix_checkBox->setGeometry(QRect(270, 40, 71, 16));
        QT_ASM_ConverterClass->setCentralWidget(centralWidget);

        retranslateUi(QT_ASM_ConverterClass);

        QMetaObject::connectSlotsByName(QT_ASM_ConverterClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_ASM_ConverterClass)
    {
        QT_ASM_ConverterClass->setWindowTitle(QApplication::translate("QT_ASM_ConverterClass", "QT_ASM_Converter", Q_NULLPTR));
        X86_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "X86", Q_NULLPTR));
        X64_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "X64", Q_NULLPTR));
        ASM_TO_HEX_pushButton->setText(QApplication::translate("QT_ASM_ConverterClass", "ASM TO HEX", Q_NULLPTR));
        Point_checkBox->setText(QApplication::translate("QT_ASM_ConverterClass", "\344\275\277\347\224\250\345\234\260\345\235\200", Q_NULLPTR));
        HEX_TO_ASM_pushButton->setText(QApplication::translate("QT_ASM_ConverterClass", "HEX TO ASM", Q_NULLPTR));
        AddX_checkBox->setText(QApplication::translate("QT_ASM_ConverterClass", "\344\275\277\347\224\250\345\211\215\347\274\200", Q_NULLPTR));
        Blank_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "\347\251\272\346\240\274", Q_NULLPTR));
        Tabs_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "\345\210\266\350\241\250\347\254\246", Q_NULLPTR));
        Add0X_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "0x00", Q_NULLPTR));
        AddX_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "\\x00", Q_NULLPTR));
        Hex_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "HEX", Q_NULLPTR));
        Dec_radioButton->setText(QApplication::translate("QT_ASM_ConverterClass", "DEC", Q_NULLPTR));
        Radix_checkBox->setText(QApplication::translate("QT_ASM_ConverterClass", "\350\277\233\345\210\266\351\200\211\346\213\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_ASM_ConverterClass: public Ui_QT_ASM_ConverterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_ASM_CONVERTER_H
