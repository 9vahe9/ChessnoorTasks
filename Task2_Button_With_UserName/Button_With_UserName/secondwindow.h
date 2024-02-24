#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(const QString& user_name);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondWindow *ui;
    QString userName;
};

#endif // SECONDWINDOW_H
