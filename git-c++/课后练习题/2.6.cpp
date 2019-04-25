/**
 *  Author      崔秦
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    将输入数字的各位相加
 */

#include <iostream>\

using namespace std;

int main()
{
    int num, sum;
    cout<<"Enter a number between 0 and 1000: ";
    cin>>num;

    int unit, decade, hundred;

    hundred = num / 100;
    decade = num % 100 / 10;
    unit =  num - 100 * hundred - 10 * decade;
    //测试代码：cout<<hundred<<" "<<decade<<" "<<unit<<endl;

    sum = hundred + decade + unit;

    cout<<"The sum of the digits is "<<sum<<endl;

    return 0;
}
