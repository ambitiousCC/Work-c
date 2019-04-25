/**
 * Author   崔秦
 * Date     2019/3/22
 * Function 计算PI
 * Version  1.0
 */

 #include <iostream>

 using namespace std;

 float sum(int lastNumber)
 {
     float PI;
     int num = -1;
     float sum = 0;

     PI = 4;
     for(int i = 1; i<=lastNumber; )
     {
        num *= -1;
        if((i+1)%2==0)
        {
            sum += num * (1.0/i);
        }
        i += 2;
        //cout<<sum<<endl;检查每次是否计算正确
     }

     PI *= sum;

    return PI;
 }

 int main()
 {
     cout<<sum(11)<<endl;
     cout<<sum(13)<<endl;

     return 0;
 }
