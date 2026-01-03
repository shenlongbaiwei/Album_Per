#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void resizeEvent(QResizeEvent *event);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QWidget* _protree;
    QWidget* _picshow;

private slots:
    void SlotCtreatePro(bool);
};
#endif // MAINWINDOW_H
