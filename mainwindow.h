#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Forms/simpleauthform.h"
#include "Forms/simpleregisterform.h"

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
};
#endif // MAINWINDOW_H
