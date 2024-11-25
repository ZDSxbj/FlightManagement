#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTableWidget>
#include <QLineEdit>
#include <QDateEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QCompleter>
#include <QListWidget>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QLineEdit *departureInput; // 出发地输入框
    QListWidget *addressListOpt; //出发地地址选择表
    QLineEdit *destinationInput; // 目的地输入框
    QListWidget *addressListOpt2; //目的地地址选择表
    QDateEdit *datePicker; // 日期选择器
    QTableWidget *flightTable; // 航班数据表

    QVBoxLayout *createLeftMenu(); // 创建左侧菜单方法
};
#endif // MAINWINDOW_H
