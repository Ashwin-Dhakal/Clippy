#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include "mainwindow.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}



void login::on_pushButton_login_clicked()//when click the login button
{
    QString username = ui->lineEdit_username->text();//username bata text nikalera username ma rakheko
    QString password = ui->lineEdit_2_password->text();

    if(username=="project" && password=="clippy"){
        this->hide();//login successful bhayo bhane login window hide huncha
        win = new MainWindow(this);//main window lai cahine memory allocate gareko
        win->show();//yo bhanda pahila win bhanne object login.h ma huna paroo aaba main window ma jane
       // QMessageBox::information(this ,"Login" , "Username and Password is correct");
    }
    else {
        QMessageBox::warning(this,"Login","Username and Password isn't correct");

    }

}

void login::on_pushButton_createaccount_clicked()
{
    createAccount= new CreateAccount(this);
    createAccount->show();
}
