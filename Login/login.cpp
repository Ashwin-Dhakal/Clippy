#include "login.h"
#include "ui_login.h"
#include<QMessageBox>

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
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();

    if(username=="admin" && password=="admin"){
        QMessageBox::information(this ,"Login" , "Username and Password is correct");
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
