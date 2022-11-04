/*
 * @CopyRight: All Rights Reserved by Yuan Ruiyi
 * @Author: Yuan Ruiyi
 * @E-mail: 850392272@qq.com
 * @Date: 2022年9月27日13:47:54
 * @LastEditTime: 2022年9月27日13:48:02
 * @LastEditors: Yuan Ruiyi
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <randomdata.h>
#include <qstring.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
