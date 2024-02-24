#ifndef BUTTON_WITH_USERNAME_H
#define BUTTON_WITH_USERNAME_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Button_With_UserName;
}
QT_END_NAMESPACE

class Button_With_UserName : public QMainWindow
{
    Q_OBJECT

public:
    Button_With_UserName(QWidget *parent = nullptr);
    ~Button_With_UserName();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    Ui::Button_With_UserName *ui;
    SecondWindow *window;
    QString user_name;
};
#endif // BUTTON_WITH_USERNAME_H
