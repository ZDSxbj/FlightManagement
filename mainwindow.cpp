#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myeventfilter.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QCompleter>
#include <QStringList>
#include <QListWidget>
#include<qstring.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 主窗口中心部件
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // 主布局：水平布局
    QHBoxLayout *mainLayout = new QHBoxLayout(centralWidget);

    // 左侧菜单布局
    QVBoxLayout *menuLayout = createLeftMenu();
    mainLayout->addLayout(menuLayout);

    // 右侧内容区域布局
    QVBoxLayout *contentLayout = new QVBoxLayout();
    // 地址列表
    QStringList addressList = {"北京市", "上海市", "广州市", "深圳市", "杭州市"};
    // 创建自动补全器
    QCompleter* completer = new QCompleter(addressList);
    completer->setCaseSensitivity(Qt::CaseInsensitive); // 不区分大小写
    completer->setCompletionMode(QCompleter::PopupCompletion); // 弹出式完成模式

    // 下拉地址列表
    addressListOpt = new QListWidget();
    addressListOpt->addItems({"北京市", "上海市", "广州市", "深圳市", "杭州市"});
    addressListOpt->setWindowFlags(Qt::ToolTip); // 设置为无边框浮动窗口
    addressListOpt->hide(); // 初始隐藏






    // 查询条件布局
    QGridLayout *queryLayout = new QGridLayout();
    queryLayout->addWidget(new QLabel("出发地:"), 0, 0);

    departureInput = new QLineEdit();


    departureInput->setPlaceholderText("请输入..."); // 提示文字

    departureInput->setCompleter(completer);
    queryLayout->addWidget(departureInput, 0, 1);
    // 设置事件过滤器以控制显示和位置
    MyEventFilter *filter = new MyEventFilter(this);
    departureInput->installEventFilter(filter);


    // 连接事件过滤器的 clicked 信号
    connect(filter, &MyEventFilter::clicked, this, [=]() {
        // 获取 departureInput 的全局坐标
        QPoint globalPos = departureInput->mapToGlobal(QPoint(0, departureInput->height()));

        // 设置 addressListOpt 的位置和宽度
        addressListOpt->move(globalPos);
        addressListOpt->resize(departureInput->width(), addressListOpt->sizeHint().height());

        // 显示或隐藏下拉列表
        addressListOpt->setVisible(!addressListOpt->isVisible());
    });
    // 点击列表项后，将值设置到输入框
    connect(addressListOpt, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
        departureInput->setText(item->text());
        addressListOpt->hide(); // 隐藏列表
    });
    // 创建按钮并添加到布局中
    QPushButton *switchButton = new QPushButton("切换");
    queryLayout->addWidget(switchButton, 0, 2);

    // 连接按钮点击事件到槽函数
    connect(switchButton, &QPushButton::clicked, this, [=]() {
        // 获取两个输入框的文本
        QString departureText = departureInput->text();
        QString destinationText = destinationInput->text();

        // 交换文本
        departureInput->setText(destinationText);
        destinationInput->setText(departureText);
    });



    queryLayout->addWidget(new QLabel("目的地:"), 0, 3);
    destinationInput = new QLineEdit("");

    destinationInput->setPlaceholderText("请输入..."); // 提示文字
    destinationInput->setCompleter(completer);
    queryLayout->addWidget(destinationInput, 0, 4);
    // 下拉地址列表
    addressListOpt2 = new QListWidget();
    addressListOpt2->addItems({"北京市", "上海市", "广州市", "深圳市", "杭州市"});
    addressListOpt2->setWindowFlags(Qt::ToolTip); // 设置为无边框浮动窗口
    addressListOpt2->hide(); // 初始隐藏
     MyEventFilter *filter2 = new MyEventFilter(this);
    destinationInput->installEventFilter(filter2);
    // 连接事件过滤器的 clicked 信号
    connect(filter2, &MyEventFilter::clicked, this, [=]() {
        // 获取 departureInput 的全局坐标
        QPoint globalPos = destinationInput->mapToGlobal(QPoint(0, departureInput->height()));

        // 设置 addressListOpt2 的位置和宽度
        addressListOpt2->move(globalPos);
        addressListOpt2->resize(destinationInput->width(), addressListOpt2->sizeHint().height());

        // 显示或隐藏下拉列表
        addressListOpt2->setVisible(!addressListOpt2->isVisible());
    });


    // 点击列表项后，将值设置到输入框
    connect(addressListOpt2, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
        destinationInput->setText(item->text());
        addressListOpt2->hide(); // 隐藏列表
    });


    queryLayout->addWidget(new QLabel("日期:"), 0, 5);
    datePicker = new QDateEdit(QDateTime::currentDateTime().date());
    datePicker->setCalendarPopup(true);
    queryLayout->addWidget(datePicker, 0, 6);

    queryLayout->addWidget(new QPushButton("确认"), 0, 7);
    contentLayout->addLayout(queryLayout);

    // 数据表格
    flightTable = new QTableWidget(5, 7, this);
    flightTable->setHorizontalHeaderLabels(QStringList()
                                           << "航班编号" << "出发地到达站" << "出发时间到达时间"
                                           << "历时" << "头等舱" << "商务舱" << "经济舱");
    flightTable->setItem(0, 3, new QTableWidgetItem("4:18\n即日到达"));
    contentLayout->addWidget(flightTable);

    // 备注说明
    QLabel *remark = new QLabel("再加一个金额多少钱起");
    remark->setAlignment(Qt::AlignRight);
    contentLayout->addWidget(remark);

    // 将右侧内容添加到主布局
    mainLayout->addLayout(contentLayout, 1); // 右侧内容占据更多空间
}

MainWindow::~MainWindow()
{

    delete ui;
}

// 创建左侧菜单
QVBoxLayout *MainWindow::createLeftMenu() {
    QVBoxLayout *menuLayout = new QVBoxLayout();
    menuLayout->addWidget(new QPushButton("首页"));
    menuLayout->addWidget(new QPushButton("订单"));
    menuLayout->addWidget(new QPushButton("我的"));
    menuLayout->addWidget(new QPushButton("联系客服"));
    menuLayout->addStretch(); // 占据剩余空间，保持菜单居上
    return menuLayout;
}


