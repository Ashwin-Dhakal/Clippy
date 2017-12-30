#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include <QListWidgetItem>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updateClipboard();

    void on_actionWho_we_are_triggered();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionExit_triggered();

    void on_actionSelect_All_triggered();

private:
    Ui::MainWindow *ui;
    QClipboard *myClip;
    QListWidgetItem *item1;
};

#endif // MAINWINDOW_H
