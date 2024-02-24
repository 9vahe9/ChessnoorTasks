#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>

SecondWindow::SecondWindow(const QString& user_name):ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    userName = user_name;
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
   QMessageBox::information(this, "User Name", userName);
}

