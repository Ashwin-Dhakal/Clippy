#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"createaccount.h" //adding header file

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_createaccount_clicked();

private:
    Ui::login *ui;
    CreateAccount *createAccount; //pointer of creataccount

};

#endif // LOGIN_H
