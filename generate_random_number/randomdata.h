/*
 * @CopyRight: All Rights Reserved by Yuan Ruiyi
 * @Author: Yuan Ruiyi
 * @E-mail: 850392272@qq.com
 * @Date: 2022年9月27日13:47:54
 * @LastEditTime: 2022年9月27日13:48:02
 * @LastEditors: Yuan Ruiyi
 */

#ifndef RANDOMDATA_H
#define RANDOMDATA_H
#include <time.h>
#include <vector>

class RandomData
{

public:
    int GetRmode();
    int GetNum();
    void ChangeRmode(int i);
    void ChangeNum(int i);
    void Init(int start);
    void Display();
    int GenerateRandomNum();

private:
    int rmode=-1;  //随机模式，包含1:重复和0:不重复两种
    int num=-1; //记录数字个数
    std::vector<int> allnum;    //存储全部要随机的数字
};

#endif // RANDOMDATA_H
