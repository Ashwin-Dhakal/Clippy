#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QClipboard>
#include <QMainWindow>
#include <QListWidgetItem>
#include <QFontMetrics>
#include <QFont>
#include <dialog.h>
#include <QDebug>
#include <QInputDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void updateClipboard();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAbout_triggered();
    void on_actionExit_triggered();
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionEdit_triggered();

    void on_actionDelete_triggered();

    void on_actionCopy_triggered();

private:
    Ui::MainWindow *ui;
    QClipboard *myClip;
    bool doUpdate=true;
    QListWidgetItem *item1;
};

#endif // MAINWINDOW_H
