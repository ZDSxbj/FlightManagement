/********************************************************************************
** Form generated from reading UI file 'Forget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_H
#define UI_FORGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Forget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *Email;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *Username;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *find_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Forget)
    {
        if (Forget->objectName().isEmpty())
            Forget->setObjectName("Forget");
        Forget->resize(621, 435);
        Forget->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256 QMainWindow \347\232\204\350\203\214\346\231\257\345\222\214\345\255\227\344\275\223 */\n"
"QDialog{\n"
"    background: rgb(255, 255, 255); /* \350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    font-size: 15px; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"MingLiU-ExtB\", \"Arial\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223\357\274\214\347\241\256\344\277\235\345\271\263\345\217\260\346\224\257\346\214\201 */\n"
"background-image: url(:/new/prefix1/Far Cry 5 Josephs Word View.png);\n"
" background-size: cover; /* \350\203\214\346\231\257\345\233\276\345\203\217\346\214\211\346\257\224\344\276\213\347\274\251\346\224\276\345\271\266\345\241\253\345\205\205\345\256\271\345\231\250 */\n"
"    background-position: center; /* \350\203\214\346\231\257\345\233\276\345\203\217\345\261\205\344\270\255\346\230\276\347\244\272 */\n"
"    background-repeat: no-repeat; /* \344\270\215\351"
                        "\207\215\345\244\215\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QFrame \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"QFrame {\n"
"    border: solid 10px rgba(0, 0, 0, 1); /* \351\273\221\350\211\262\345\256\236\347\272\277\350\276\271\346\241\206\357\274\214\345\256\275\345\272\246\344\270\272 10px */\n"
"    background-image: url(:/new/prefix1/Far Cry 5 Josephs Word View.png); /* \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat; /* \344\270\215\351\207\215\345\244\215 */\n"
"    background-position: center; /* \345\261\205\344\270\255\346\230\276\347\244\272\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QLineEdit \346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    color: #8d98a1; /* \350\276\223\345\205\245\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"    background-color: #405361; /* \350\276\223\345\205\245\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
" "
                        "   font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-style: outset; /* \345\244\226\345\207\270\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    font-family: \"MingLiU-ExtB\", \"Arial\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QPushButton \346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background: rgb(170, 85, 255); /* \346\214\211\351\222\256\350\203\214\346\231\257\350\211\262 */\n"
"    border-style: outset; /* \345\244\226\345\207\270\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"Bold\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QPushButton \346\214\211\344\270\213\346\227\266"
                        "\347\232\204\346\240\267\345\274\217 */\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 170, 255); /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border-style: inset; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"Bold\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QCheckBox \346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    background: rgba(85, 170, 255, 0); /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-family: \"MingLiU-ExtB\", \"Arial\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QLabel \346\240\267\345\274\217 */\n"
"QLabel {\n"
"    background: rgba"
                        "(85, 170, 255, 0); /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    \n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(Forget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        widget_4 = new QWidget(Forget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label = new QLabel(widget_4);
        label->setObjectName("label");
        label->setMinimumSize(QSize(90, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(Forget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(16);
        font1.setBold(true);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        Email = new QLineEdit(widget);
        Email->setObjectName("Email");
        Email->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(Email);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Forget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        Username = new QLineEdit(widget_2);
        Username->setObjectName("Username");
        Username->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(Username);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Forget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        find_button = new QPushButton(widget_3);
        find_button->setObjectName("find_button");
        find_button->setMinimumSize(QSize(110, 40));
        find_button->setFont(font1);

        horizontalLayout_3->addWidget(find_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        retranslateUi(Forget);

        QMetaObject::connectSlotsByName(Forget);
    } // setupUi

    void retranslateUi(QDialog *Forget)
    {
        Forget->setWindowTitle(QCoreApplication::translate("Forget", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Forget", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("Forget", "\346\263\250\345\206\214\351\202\256\347\256\261:", nullptr));
        label_3->setText(QCoreApplication::translate("Forget", "\347\224\250\346\210\267\345\220\215:", nullptr));
        find_button->setText(QCoreApplication::translate("Forget", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Forget: public Ui_Forget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_H
