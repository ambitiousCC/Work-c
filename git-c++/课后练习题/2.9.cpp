/**
 *  Author      崔秦
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    输入初、末速度和时间计算加速度
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double V0, V1, t;
    cout<<"Enter V0 V1, and t: ";
    cin>>V0>>V1>>t;

    double a;
    a = (V1 - V0) / t;

    cout<<"The average acceleration is "<<a;

    return 0;
 }
