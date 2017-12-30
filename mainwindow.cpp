#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QInputDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myClip = QApplication::clipboard();
    connect(myClip,SIGNAL(changed(QClipboard::Mode)),this,SLOT(updateClipboard()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateClipboard()
{
    QListWidgetItem *myItem=new QListWidgetItem();

           QFont myFont("Segoe UI", 9);
           QFontMetrics FM(myFont);
           myItem->setSizeHint(QSize(150,70));
           myItem->setText(myClip->text());
           ui->listWidget->addItem(myItem);
}

void MainWindow::on_actionWho_we_are_triggered()
{
 QMessageBox::information(this,"Who we are","we are getting professional Soon !!");
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
//on_actionExit_triggered(item);
    item1=item;
}

void MainWindow::on_actionExit_triggered()
{
    qDebug()<<"Received :"<<item1;
    delete item1;
}

void MainWindow::on_actionSelect_All_triggered()
{

        QString myText=QInputDialog::getText(this,"Edit","Text",QLineEdit::Normal,item1->text());
        item1->setText(myText);

}
