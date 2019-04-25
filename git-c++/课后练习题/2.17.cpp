/**
 *  Author      崔秦
 *  Date        2019/3/24
 *  Version     1.0
 *  Function    计算风和温度共同决定的值
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
     float F, v;
     double t;
     cout<<"Enter the temperature in Fahrenheit: ";
     cin>>F;
     cout<<"Enter the wind speed in miles per hour: ";
     cin>>v;

     if(-58 < F && F < 41 && 2 <= v)
     {
        t = 35.74 + 0.6215 * F - 35.75 * pow(v, 0.16) + 0.4275 * F * pow(v, 0.16);

        cout<<"The wind chill index is "<<t<<endl;
     }
     else
     {
         cout<<"Please ensure temperature and wind speed are required"<<endl;
     }

     return 0;
 }
