/**
 *  Author      崔秦
 *  Date        2019/3/25
 *  Version     1.0
 *  Function    计算出三角形的面积
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 double side(double a, double b, double c, double d)
 {
     double x = (c - a) * (c - a);
     double y = (d - b) * (d - b);

     double xy = pow((x + y), 0.5);

     return xy;
 }

 int main()
 {
     double x1, x2, x3, y1, y2, y3;//别忘记是整型！！！1
     cout<<"Enter three points for a triangle: ";
     cin>>x1>>y1>>x2>>y2>>x3>>y3;

     double s = (side(x1,y1,x2,y2) + side(x1,y1,x3,y3) + side(x2,y2,x3,y3)) / 2;

     double num = s * (s - side(x1,y1,x2,y2)) * (s - side(x1,y1,x3,y3)) * (s - side(x2,y2,x3,y3));

     double area = pow(num, 0.5);

     cout<<"The area of the triangle is "<<area;

     return 0;
 }
