#include "simpleauthform.h"
#include "ui_simpleauthform.h"

SimpleAuthForm::SimpleAuthForm(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::SimpleAuthForm)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal);
    ui->labelInfo->setText("Enter your authorization data.\n Or create New User");
}

SimpleAuthForm::~SimpleAuthForm()
{
    delete ui;
}

void SimpleAuthForm::on_btnCancel_clicked()
{
    emit onCancelBtnClicked();
}

void SimpleAuthForm::on_btnReg_clicked()
{
    emit onRegBtnClicked();
}

void SimpleAuthForm::on_btnOk_clicked()
{
    emit onOkBtnClicked();
}

