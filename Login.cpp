#include "Login.h"
#include "mainwindow.h"
#include "ui_Login.h"
#include"Register.h"
#include"Forget.h"
#include <QSqlDatabase>
#include <QSqlError>
#include<QSqlQuery>
#include<iostream>
#include<QMainWindow>
#include<QMessageBox>
using namespace std;
Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    w.setWindowTitle("航班管理系统");
    w.resize(800, 600);
    ui->forget->setTextFormat(Qt::RichText);
    ui->forget->setText("<a href=\"forgot_password\">忘记密码？</a>");
    ui->forget->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->forget->setOpenExternalLinks(false); // 禁止打开外部链接
    connect(ui->forget,&QLabel::linkActivated,this,[=](const QString &link) {
    // 当点击链接时，打开 Forget 窗口
    if (link == "forgot_password") {
        Forget *f = new Forget();
        f->show();
    }
    });

    ui->regis->setTextFormat(Qt::RichText);
    ui->regis->setText("<a href=\"register_account\">注册</a>");
    ui->regis->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->regis->setOpenExternalLinks(false); // 禁止打开外部链接
    connect(ui->regis,&QLabel::linkActivated,this,[=](const QString &link) {
        // 当点击链接时，打开 Forget 窗口
        if (link == "register_account") {
            Register *f = new Register();
            f->show();
        }
    });

    connect(ui->pushButton_2,&QPushButton::clicked,this,[=]{
        QSqlQuery query("SELECT * FROM users");
        while(query.next())
        {
            int id = query.value(0).toInt();
            QString username = query.value(1).toString();
            QString password = query.value(2).toString();
            QString name= ui->lineEdit->text();
            QString words= ui->lineEdit_2->text();
            qDebug() << name<<" "<<words<<" "<<username<<" "<<password<<"\n";
            if(name==username&&password==words)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            this->close();
            w.show();
        }
        else
        {
            QMessageBox::warning(this, "登录失败", "用户名或密码错误，请重新输入！");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
        }
    });
}

Login::~Login()
{
    delete ui;
}


