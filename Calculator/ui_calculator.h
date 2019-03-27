/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QLabel *label1;
    QLabel *label2;
    QPushButton *pushButton_add;
    QPushButton *pushButton_A;
    QPushButton *pushButton_C;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_E;
    QPushButton *pushButton_min;
    QPushButton *pushButton_B;
    QPushButton *pushButton_D;
    QPushButton *pushButton_F;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_div;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_clearall;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_clearone;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;

    void setupUi(QDialog *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(417, 480);
        Calculator->setStyleSheet(QLatin1String("color: rgb(72, 145, 0);\n"
"background-image: url(:/photo/5c - 1.jpg);\n"
"\n"
"\n"
"\n"
"\n"
""));
        label1 = new QLabel(Calculator);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(0, 0, 411, 71));
        label1->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(247, 247, 247);\n"
"\n"
"\n"
""));
        label2 = new QLabel(Calculator);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(240, 80, 171, 41));
        label2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_add = new QPushButton(Calculator);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(0, 130, 61, 61));
        pushButton_add->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_A = new QPushButton(Calculator);
        pushButton_A->setObjectName(QStringLiteral("pushButton_A"));
        pushButton_A->setGeometry(QRect(0, 200, 61, 61));
        pushButton_A->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_C = new QPushButton(Calculator);
        pushButton_C->setObjectName(QStringLiteral("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 270, 61, 61));
        pushButton_C->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_mod = new QPushButton(Calculator);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(0, 410, 61, 61));
        pushButton_mod->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_E = new QPushButton(Calculator);
        pushButton_E->setObjectName(QStringLiteral("pushButton_E"));
        pushButton_E->setGeometry(QRect(0, 340, 61, 61));
        pushButton_E->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_min = new QPushButton(Calculator);
        pushButton_min->setObjectName(QStringLiteral("pushButton_min"));
        pushButton_min->setGeometry(QRect(70, 130, 61, 61));
        pushButton_min->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_B = new QPushButton(Calculator);
        pushButton_B->setObjectName(QStringLiteral("pushButton_B"));
        pushButton_B->setGeometry(QRect(70, 200, 61, 61));
        pushButton_B->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_D = new QPushButton(Calculator);
        pushButton_D->setObjectName(QStringLiteral("pushButton_D"));
        pushButton_D->setGeometry(QRect(70, 270, 61, 61));
        pushButton_D->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_F = new QPushButton(Calculator);
        pushButton_F->setObjectName(QStringLiteral("pushButton_F"));
        pushButton_F->setGeometry(QRect(70, 340, 61, 61));
        pushButton_F->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_pow = new QPushButton(Calculator);
        pushButton_pow->setObjectName(QStringLiteral("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(70, 410, 61, 61));
        pushButton_pow->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_mul = new QPushButton(Calculator);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(140, 130, 61, 61));
        pushButton_mul->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_7 = new QPushButton(Calculator);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(140, 200, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_4 = new QPushButton(Calculator);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 270, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_1 = new QPushButton(Calculator);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(140, 340, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        pushButton_div = new QPushButton(Calculator);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(210, 130, 61, 61));
        pushButton_div->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_8 = new QPushButton(Calculator);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 200, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_5 = new QPushButton(Calculator);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 270, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
""));
        pushButton_2 = new QPushButton(Calculator);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 340, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_clearall = new QPushButton(Calculator);
        pushButton_clearall->setObjectName(QStringLiteral("pushButton_clearall"));
        pushButton_clearall->setGeometry(QRect(280, 130, 61, 61));
        pushButton_clearall->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_9 = new QPushButton(Calculator);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(280, 200, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_6 = new QPushButton(Calculator);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(280, 270, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        pushButton_equal = new QPushButton(Calculator);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(350, 340, 61, 121));
        pushButton_equal->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_clearone = new QPushButton(Calculator);
        pushButton_clearone->setObjectName(QStringLiteral("pushButton_clearone"));
        pushButton_clearone->setGeometry(QRect(350, 130, 61, 61));
        pushButton_clearone->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        pushButton_left = new QPushButton(Calculator);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(350, 200, 61, 61));
        pushButton_left->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_right = new QPushButton(Calculator);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(350, 270, 61, 61));
        pushButton_right->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_3 = new QPushButton(Calculator);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 340, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        pushButton_0 = new QPushButton(Calculator);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(162, 410, 171, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QDialog *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        pushButton_add->setText(QApplication::translate("Calculator", "+", nullptr));
        pushButton_A->setText(QApplication::translate("Calculator", "A", nullptr));
        pushButton_C->setText(QApplication::translate("Calculator", "C", nullptr));
        pushButton_mod->setText(QApplication::translate("Calculator", "%", nullptr));
        pushButton_E->setText(QApplication::translate("Calculator", "E", nullptr));
        pushButton_min->setText(QApplication::translate("Calculator", "-", nullptr));
        pushButton_B->setText(QApplication::translate("Calculator", "B", nullptr));
        pushButton_D->setText(QApplication::translate("Calculator", "D", nullptr));
        pushButton_F->setText(QApplication::translate("Calculator", "F", nullptr));
        pushButton_pow->setText(QApplication::translate("Calculator", "^", nullptr));
        pushButton_mul->setText(QApplication::translate("Calculator", "*", nullptr));
        pushButton_7->setText(QApplication::translate("Calculator", "7", nullptr));
        pushButton_4->setText(QApplication::translate("Calculator", "4", nullptr));
        pushButton_1->setText(QApplication::translate("Calculator", "1", nullptr));
        pushButton_div->setText(QApplication::translate("Calculator", "/", nullptr));
        pushButton_8->setText(QApplication::translate("Calculator", "8", nullptr));
        pushButton_5->setText(QApplication::translate("Calculator", "5", nullptr));
        pushButton_2->setText(QApplication::translate("Calculator", "2", nullptr));
        pushButton_clearall->setText(QApplication::translate("Calculator", "AC", nullptr));
        pushButton_9->setText(QApplication::translate("Calculator", "9", nullptr));
        pushButton_6->setText(QApplication::translate("Calculator", "6", nullptr));
        pushButton_equal->setText(QApplication::translate("Calculator", "=", nullptr));
        pushButton_clearone->setText(QApplication::translate("Calculator", "CE", nullptr));
        pushButton_left->setText(QApplication::translate("Calculator", "(", nullptr));
        pushButton_right->setText(QApplication::translate("Calculator", ")", nullptr));
        pushButton_3->setText(QApplication::translate("Calculator", "3", nullptr));
        pushButton_0->setText(QApplication::translate("Calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
