#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Connecting SIGNALS from authorization form width SLOTS in main window
    connect(&authForm,SIGNAL(onCancelBtnClicked()),this,SLOT(AuthFormCancel()));
    connect(&authForm,SIGNAL(onOkBtnClicked()),this,SLOT(AuthFormOk()));
    connect(&authForm,SIGNAL(onRegBtnClicked()),this,SLOT(AuthFormReg()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::display()
{
    authForm.show();
}

void MainWindow::AuthFormOk()
{
    QString tmp_login = authForm.GetLogin(),tmp_pass = authForm.GetPass();
    userBase = new Sqlite(tmp_login,tmp_pass);
}

void MainWindow::AuthFormCancel()
{
    QApplication::exit();
}

void MainWindow::AuthFormReg()
{

}
