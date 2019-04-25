/**
 *  Author      崔秦
 *  Date        2019/3/23
 *  Version     1.0
 *  Function    输入飞机的起飞速度和加速度，计算出离开地面的最短距离
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    float v, a;
    cout<<"Enter speed and acceleration: ";
    cin>>v>>a;

    float length;
    length = (v * v) / (2 * a);

    cout<<"The minimum runway length for this airplane is "<<length;

    return 0;

 }
