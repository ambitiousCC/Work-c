/**
 *  Author  崔秦
 *  Date    2019/3/20
 *  Version 1.12
 *  Function单位换算+计算平均速度
 */

 #include <iostream>

 using namespace std;

 double changeTime(int hour, int minutes, int seconds)
 {
     double hours = 0;

     hours += hour + minutes/60.0 + seconds/3600.0;

     return hours;
 }

 double changeKilometers(int miles)
 {
     double kilometers;

     kilometers = miles * 1.6;

     return kilometers;
 }

 int main()
 {
     double averageV ;

     averageV = changeKilometers(24) / changeTime(1,40,35);

     cout<<"平均速度为："<<averageV<<"km/h"<<endl;

     return 0;
 }
