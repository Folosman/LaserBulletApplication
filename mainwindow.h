#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "networkconnector.h"


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    NetworkConnector networkConnector;
};
#endif // MAINWINDOW_H
