#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(uzmiPodatke()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::uzmiPodatke()
{
    double f=ui->lFrekvencija->text().toDouble();
    bool c=ui->rbtnPrav->isChecked();
    View * view;
  view=(View *)centralWidget();
  view->Preuzmi(f,c);




}
