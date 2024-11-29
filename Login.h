#ifndef LOGIN_H
#define LOGIN_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    bool f=0;
    MainWindow w;

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
