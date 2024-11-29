#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    // bool isValidEmail(const QString &email) {
    //     // 定义一个常见的邮箱格式正则表达式
    //     QRegularExpression regex(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");

    //     // 检查邮箱是否匹配正则表达式
    //     return regex.match(email).hasMatch();
    // }

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
