/**
 *  Author      崔秦
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    输入分钟然后换算成为年和天
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     long minutes;
     cout<<"Enter the number of minutes: ";
     cin>>minutes;

     long days_0, days, years;
     days_0 = minutes / (24 * 60);
     years = days_0 / 365;
     days = days_0 % 365;

     cout<<minutes<<" minutes is approximately "<<years<<" and "<<days<<" days"<<endl;

     return 0;
 }
