/*
 * @CopyRight: All Rights Reserved by Yuan Ruiyi
 * @Author: Yuan Ruiyi
 * @E-mail: 850392272@qq.com
 * @Date: 2022年9月27日13:47:54
 * @LastEditTime: 2022年9月27日13:48:02
 * @LastEditors: Yuan Ruiyi
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>

RandomData a;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //获取当前rmode状态
    if( ui->checkBox->isChecked()) {
        a.ChangeRmode(1);
    }

    if( false == ui->checkBox->isChecked()) {
        a.ChangeRmode(0);
    }
    qDebug()<<"当前rmode值为："<<a.GetRmode()<<endl;
    auto get_start_num = ui->lineEdit->text().toInt();
    auto get_end_num = ui->lineEdit_2->text().toInt();
    //获取当前数组规模num
    a.ChangeNum(get_end_num-get_start_num+1);
    //根据start和num进行初始化
    a.Init(get_start_num);
    //a.display();
    //获取随机结果的下标
    auto ans = a.GenerateRandomNum();
    //输出到lineEdit_3
    QString ans_to_lineedit3 = QString::number(ans);
    ui->lineEdit_3->setText(ans_to_lineedit3);
}

void MainWindow::on_checkBox_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    //获取随机结果的下标
    auto ans = a.GenerateRandomNum();
    if(-1==ans)
        ui->lineEdit_3->setText("本次随机结束，已无多余数字。");
    //输出到lineEdit_3
    else {
        QString ans_to_lineedit3 = QString::number(ans);
        ui->lineEdit_3->setText(ans_to_lineedit3);
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{

}
