#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);// suru ma yo block call huncha

    myClip = QApplication::clipboard();//myclip bhanne pbject banyo ani connect le signal ra slot lai jodcha
    connect(myClip,SIGNAL(dataChanged()),this,SLOT(updateClipboard()));//kei change bhayo bhane data change bhayo bhanera signal pathaucha ra slot le signal receive garcha

}
//clipboard ma change aaune bittikai yo block call huncha
void MainWindow::updateClipboard()
{
    if(doUpdate){
        QListWidgetItem *myItem=new QListWidgetItem();
        QFont myFont("Segoe UI", 9);
        QFontMetrics FM(myFont);
        myItem->setSizeHint(QSize(FM.width(myClip->text())+50,100));
        myItem->setText(myClip->text());//myclip->text ko thau ma copy bhanye ko content replace hucnha
        ui->listWidget->insertItem(0,myItem);//insert ko thau ma add lekheko bhaye position herne thiyena
     }
    doUpdate=true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    Dialog dialob;
    dialob.setModal(true);
    dialob.exec();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    item1=item;
}

void MainWindow::on_actionEdit_triggered()
{
    QString myText=QInputDialog::getMultiLineText(this,"Edit","Text",item1->text());
    if(myText.isEmpty())
        myText=item1->text();
    item1->setText(myText);
}

void MainWindow::on_actionDelete_triggered()
{
    delete item1;
}

void MainWindow::on_actionCopy_triggered()
{
    myClip->setText(item1->text());
    doUpdate=false;
}
