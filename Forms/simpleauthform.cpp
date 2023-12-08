#include "simpleauthform.h"
#include "ui_simpleauthform.h"

SimpleAuthForm::SimpleAuthForm(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::SimpleAuthForm)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal);
}

SimpleAuthForm::~SimpleAuthForm()
{
    delete ui;
}
