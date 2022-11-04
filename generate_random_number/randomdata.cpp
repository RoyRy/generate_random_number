/*
 * @CopyRight: All Rights Reserved by Yuan Ruiyi
 * @Author: Yuan Ruiyi
 * @E-mail: 850392272@qq.com
 * @Date: 2022年9月27日13:47:54
 * @LastEditTime: 2022年9月27日13:48:02
 * @LastEditors: Yuan Ruiyi
 */

#include <randomdata.h>
#include <qdebug.h>

//改变rmode
void RandomData::ChangeRmode(int i)
{
    rmode = i;
}

//改变num
void RandomData::ChangeNum(int i)
{
    num = i;
}

//获取当前rmode
int RandomData::GetRmode()
{
    return rmode;
}

//获取当前num
int RandomData::GetNum()
{
    return num;
}

//初始化allnum数组
void RandomData::Init(int start)
{
    allnum.clear(); //清除当前缓存，可多次随机
    qDebug()<<"当前num值为："<<num<<endl;
    for(auto i=0;i < num;i++)
        allnum.push_back(start++);
    qDebug()<<"allnum初始化完成"<<endl;
}

//输出allnum数组
void RandomData::Display()
{
    for(auto num : allnum)
        qDebug()<<num<<endl;
}

int RandomData::GenerateRandomNum()
{
    if(0==allnum.size())
        return -1;
    //允许重复
    if(1==rmode) {
        srand((unsigned)time(NULL)); //srand()函数产生一个以当前时间开始的随机种子
        // 注意：参数的随机数一定要在数组的索引范围之内，否则会有越界的风险
        int index = rand() % allnum.size();    // 参数0 - 9的随机数
        qDebug()<<"当前allnum.size()为："<<allnum.size()<<endl;
        return allnum[index];
    }
    //不允许重复
    if(0==rmode) {
        srand((unsigned)time(NULL)); //srand()函数产生一个以当前时间开始的随机种子
        // 注意：参数的随机数一定要在数组的索引范围之内，否则会有越界的风险
        int index = rand() % allnum.size();    // 参数0 - 9的随机数
        //存储随机结果
        int tmp = 0;
        tmp = allnum[index];
        //删除已经产生过的随机数
        auto it = allnum.begin()+index;
        allnum.erase(it);
        qDebug()<<"当前allnum.size值为："<<allnum.size()<<endl;
        Display();
        return tmp;
    }
}


