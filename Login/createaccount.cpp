#include "createaccount.h"
#include "ui_createaccount.h"
#include<QMessageBox>

CreateAccount::CreateAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAccount)
{
    ui->setupUi(this);
    this->setFixedWidth(451);
    this->setFixedHeight(380);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::on_pushButton_clicked()//after clicking sign up button
{


    QString firstname =ui->firstname->text();
    QString lastname =ui->lastname->text();
    QString username =ui->username->text();
    QString email =ui->email->text();
    QString password =ui->password->text();
    QString confirmpassword =ui->conformpassword->text();

    if(firstname.isEmpty()||lastname.isEmpty()||username.isEmpty()||email.isEmpty()||password.isEmpty()||confirmpassword.isEmpty()){
            QMessageBox::warning(this ,"SignUp","Please fill your details !!");
        }
    else if (password!=confirmpassword){
        QMessageBox::warning(this,"SignUp","Passwords don't match!!");
    }
    else{
        hide();
        QMessageBox::information(this,"SignUp","Sucessfully created a Account.");
}



}
