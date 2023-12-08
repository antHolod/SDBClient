#ifndef SIMPLEAUTHFORM_H
#define SIMPLEAUTHFORM_H

#include <QWidget>
#include <QString>

namespace Ui {
class SimpleAuthForm;
}

class SimpleAuthForm : public QWidget {
    Q_OBJECT

public:
    explicit SimpleAuthForm(QWidget* parent = nullptr);
    ~SimpleAuthForm();

private:
    Ui::SimpleAuthForm* ui;
    QString m_login;
    QString m_pass;

signals:
    void onOkBtnClicked();
};

#endif // SIMPLEAUTHFORM_H
