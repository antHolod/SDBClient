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

    QString GetLogin()          {return m_login;}
    QString GetPass()           {return m_pass;}

private:
    Ui::SimpleAuthForm* ui;
    QString m_login;
    QString m_pass;

signals:
    void onOkBtnClicked();
    void onCancelBtnClicked();
};

#endif // SIMPLEAUTHFORM_H
