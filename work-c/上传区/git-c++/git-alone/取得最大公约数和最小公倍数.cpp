
/**
 *  @Author:    崔秦
 *  @Date:      2019/3/15
 *  @Version:   1.0
 *  @Funtion:   输出最小公倍数和最大公约数
 *  @Thinkng:   1.数组输出(未实现)
 *              2.乘积取余数(未实现)
 *              3.辗转相除
 */

#include <iostream>

using namespace std;

int main()
{

    int num1,num2;
    cout<<"请输入两个正整数：";
    cin>>num1>>num2;

        int maxNum = 0;
        int tmp1,tmp2;

        if(num1<num2)
        {
            tmp1 = num1;
            num1 = num2;
            num2 = tmp1;
        }

        int minNum = num1 * num2;

        while(num2!=0)
        {
            tmp2 = num1 % num2 ;
            num1 = num2;
            num2 = tmp2;
        }
        maxNum = num1;//最容易错的就是这里：最大公约数就是最后的余数，而此时余数是被赋给第一个数值了。
        minNum = minNum / maxNum;//最小公倍数是乘积与最大公约数的除数

    cout<<"最大公约数："<<maxNum<<"\n最小公倍数："<<minNum<<endl;

    return 0;
}
