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

    void setupUi(QMainWindow *QT_ASM_ConverterClass)
    {
        if (QT_ASM_ConverterClass->objectName().isEmpty())
            QT_ASM_ConverterClass->setObjectName(QStringLiteral("QT_ASM_ConverterClass"));
        QT_ASM_ConverterClass->resize(640, 242);
        centralWidget = new QWidget(QT_ASM_ConverterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        X86_radioButton = new QRadioButton(centralWidget);
        X86_radioButton->setObjectName(QStringLiteral("X86_radioButton"));
        X86_radioButton->setGeometry(QRect(270, 20, 89, 16));
        X64_radioButton = new QRadioButton(centralWidget);
        X64_radioButton->setObjectName(QStringLiteral("X64_radioButton"));
        X64_radioButton->setGeometry(QRect(320, 20, 89, 16));
        ASM_textEdit = new QTextEdit(centralWidget);
        ASM_textEdit->setObjectName(QStringLiteral("ASM_textEdit"));
        ASM_textEdit->setGeometry(QRect(10, 10, 251, 221));
        ASM_TO_HEX_pushButton = new QPushButton(centralWidget);
        ASM_TO_HEX_pushButton->setObjectName(QStringLiteral("ASM_TO_HEX_pushButton"));
        ASM_TO_HEX_pushButton->setGeometry(QRect(270, 60, 91, 23));
        Hex_textEdit = new QTextEdit(centralWidget);
        Hex_textEdit->setObjectName(QStringLiteral("Hex_textEdit"));
        Hex_textEdit->setGeometry(QRect(370, 10, 251, 221));
        Point_checkBox = new QCheckBox(centralWidget);
        Point_checkBox->setObjectName(QStringLiteral("Point_checkBox"));
        Point_checkBox->setGeometry(QRect(270, 40, 71, 16));
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
    } // retranslateUi

};

namespace Ui {
    class QT_ASM_ConverterClass: public Ui_QT_ASM_ConverterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_ASM_CONVERTER_H
