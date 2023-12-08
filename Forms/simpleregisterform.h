#ifndef SIMPLEREGISTERFORM_H
#define SIMPLEREGISTERFORM_H

#include <QWidget>

namespace Ui {
class SimpleRegisterForm;
}

class SimpleRegisterForm : public QWidget {
    Q_OBJECT

public:
    explicit SimpleRegisterForm(QWidget* parent = nullptr);
    ~SimpleRegisterForm();

private:
    Ui::SimpleRegisterForm* ui;
};

#endif // SIMPLEREGISTERFORM_H
