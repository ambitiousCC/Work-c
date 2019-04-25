/**
 *  Author  崔秦
 *  Date    2019/3/20
 *  Version 1.0
 *  Funtion 计算下一个五年的人口数
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int year;
     cout<<"你想要知道未来几年的人口？";
     cin>> year;

     long currentPopulation = 312032486;
     long oneYearSeconds = 365*24*60*60;

     int birth, death, immigrant;

     float oneYearPopChange = oneYearSeconds / 7.0 + oneYearSeconds / 45.0 - oneYearSeconds / 13.0;

     cout<<"未来"<<year<<"年的人口如下"<<endl;
     for(int i = 0; i < year; i++)
     {
         currentPopulation += oneYearPopChange;
         cout<<"第"<<i<<"年的人口为："<<currentPopulation<<endl;
     }

     return 0;
 }
