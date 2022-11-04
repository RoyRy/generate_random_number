/*
 * @CopyRight: All Rights Reserved by Yuan Ruiyi
 * @Author: Yuan Ruiyi
 * @E-mail: 850392272@qq.com
 * @Date: 2022年9月27日13:47:54
 * @LastEditTime: 2022年9月27日13:48:02
 * @LastEditors: Yuan Ruiyi
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
