#include "simpleregisterform.h"
#include "ui_simpleregisterform.h"

SimpleRegisterForm::SimpleRegisterForm(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::SimpleRegisterForm)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal);
}

SimpleRegisterForm::~SimpleRegisterForm()
{
    delete ui;
}
