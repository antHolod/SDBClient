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
