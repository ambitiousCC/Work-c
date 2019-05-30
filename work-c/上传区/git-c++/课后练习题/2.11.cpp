/**
 *  Author  崔秦
 *  Date    2019/3/20 -直接利用1.11这个文件到这里-> 2019/3/22
 *  Version 2.0
 *  Function 计算你想知道未来第几年人口数
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int year;
     cout<<"你想要知道未来第几年的人口？";
     cin>> year;

     long currentPopulation = 312032486;
     long oneYearSeconds = 365*24*60*60;

     int birth, death, immigrant;

     float oneYearPopChange = oneYearSeconds / 7.0 + oneYearSeconds / 45.0 - oneYearSeconds / 13.0;

     cout<<"未来"<<year<<"年的人口如下"<<endl;
     currentPopulation += oneYearPopChange * year;

     cout<<"第"<<year<<"年的人口为："<<currentPopulation<<endl;

     return 0;
 }

