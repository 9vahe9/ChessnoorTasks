#include "button_with_username.h"
#include "./ui_button_with_username.h"
#include <QMessageBox>


Button_With_UserName::Button_With_UserName(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Button_With_UserName)
{
    ui->setupUi(this);
}

Button_With_UserName::~Button_With_UserName()
{
    delete ui;
}

void Button_With_UserName::on_pushButton_clicked()
{
    if (user_name != ""){
        hide();
        window = new SecondWindow(user_name);
        window->show();
    }

    else
    {
        QMessageBox::warning(this, "Warning", "User name is empty!");
    }
}


void Button_With_UserName::on_lineEdit_2_textChanged(const QString &arg1)
{
    user_name = arg1;
}

