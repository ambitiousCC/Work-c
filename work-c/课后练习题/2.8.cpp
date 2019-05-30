/**
 *  @Author     ´ÞÇØ
 *  @Date       2019/3/27
 *  @Version    1.0
 *  @Function   ×ª»»Ê±Çø
 */

 #include <iostream>
 #include <ctime>

 using namespace std;

 int main()
 {
     int totalSeconds = time(0);
     int currentSecond = totalSeconds % 60;
     int totalMinutes = totalSeconds / 60;
     int currentMinute = totalMinutes % 60;
     int totalHours = totalMinutes / 60;
     int currentHour = totalHours % 24;

     double timeZone;
     cout<<"Enter the time zone offset to GMT:";
     cin>>timeZone;

     currentHour -= timeZone;

     cout<<"Current time is "<<currentHour<<":"<<currentMinute<<":"<<currentSecond<<"GMT"<<endl;

     return 0;
 }
