/**
 *  Author  崔秦
 *  Date    2019/3/26
 *  Version 1.0
 *  Function输入半径和长度计算圆柱体体积和面积
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 #define PI acos(-1)
 int main()
 {
     double radius, length;
     cout<<"Enter the radius and length of a cylinder: ";
     cin>>radius>>length;

     double area = radius * radius * PI;
     double volume = area * length;

     cout<<"The area is "<<area<<endl;
     cout<<"The volume is "<<volume<<endl;

     return 0;
 }
