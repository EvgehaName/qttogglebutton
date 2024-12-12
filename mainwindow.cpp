#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->pushButton->setPixmapToggle("D:\\red.png", "D:\\red.png");
    ui->pushButton->setTextToggle("ON", "OFF");
}

MainWindow::~MainWindow()
{
    delete ui;
}

