/**
 *  function:   计算圆球体积
 *  保留小数的方法：
 *  第一种写法
 * 	cout<<setiosflags(ios::fixed)<<setprecision(2);
 *
 *
 *  第二种写法
 *	cout.setf(ios::fixed);
 *	cout<<setprecision(2);
 *
 *	第三种写法
 *	cout<<fixed<<setprecision(2);
 *
 *
 *  #include <iomanip>需要头文件
 */

#include <iostream>

using namespace std;
int main()
{
    double r;
    double V;
    double PI;
    int V_lastNum;
    cin>>r;

    PI = 3.1415926;

    V = (4.0/3.0)*PI*r*r*r+0.005;
    V_lastNum = V * 1000 ;//不能直接操作这里
    V_lastNum = V_lastNum % 10;
    V = V - 0.001 * V_lastNum;

    cout<<V<<endl;
 }
