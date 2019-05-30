/**
 *  function: 转换单位
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int int_in0,int_yd0,int_ft0;
     int int_in1,int_mi1,int_yd1,int_ft1;
     cin>>int_in0;

     //一英里 63360 英寸
     //一码   36
     //一英尺 12
     int_mi1 = int_in0 / 63360;
     int_yd0 = int_in0 % 63360;
     int_yd1 = int_yd0 / 36;
     int_ft0 = int_yd0 % 36;
     int_ft1 = int_ft0 / 12;
     int_in1 = int_ft0 % 12;

     if(0 != int_mi1)
     {
         cout<<int_mi1<<" mi";
         if(0 != int_yd1)
            cout<<" ";
     }
     if(0 != int_yd1)
     {
         cout<<int_yd1<<" yd";
         if(0 != int_ft1)
            cout<<" ";
     }
     if(0 != int_ft1)
     {
         cout<<int_ft1<<" ft";
         if(0 != int_in1)
            cout<<" ";
     }
     if(0 != int_in1)
     {
         cout<<int_in1<<" in";
     }

     return 0;
 }
