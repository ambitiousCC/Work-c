/**
 *  Author      崔秦
 *  Date        2019/3/25
 *  Version     1.0
 *  Function    计算六边形的面积
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
     float side;
     cout<<"Enter the side : ";
     cin>>side;

     double c = 1.5 * pow(3,0.5);

     double area = c * side * side;

     cout<<"The area of the hexagon is "<<area;

     return 0;
 }
