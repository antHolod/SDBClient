#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Forms/simpleauthform.h"
#include "Forms/simpleregisterform.h"
#include "SQLiteClass/sqlite.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void display();

private:
    Ui::MainWindow* ui;
    SimpleAuthForm authForm;
    SimpleRegisterForm regForm;
    Sqlite *userBase;

    QString m_user;
    QString m_pass;

private slots:
    void AuthFormOk();
    void AuthFormCancel();
    void AuthFormReg();
};
#endif // MAINWINDOW_H
