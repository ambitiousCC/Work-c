/**
 *  Author      崔秦
 *  Date        2019/3/23
 *  Version     1.0
 *  Function    计算两点之间的距离
 */

 #include <iostream>
 #include<math.h>

 using namespace std;

 int main()
 {
     double x1, x2, y1, y2;
     cout<<"Enter x1 and y1: ";
     cin>>x1>>y1;
     cout<<"Enter x2 and y2: ";
     cin>>x2>>y2;

     double x = (x2 - x1) * (x2 - x1);
     double y = (y2 - y1) * (y2 - y1);

     double xy = pow((x + y), 0.5);

     cout<<"The distance between the two points is "<<xy;

     return 0;
 }
