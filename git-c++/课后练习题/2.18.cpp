/**
 *  Author      崔秦
 *  Date        2019/3/25
 *  Version     1.0
 *  Function    输入一个求指数
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
     cout<<"a    "<<"b    "<<"pow(a, b)"<<endl;

     for(int i = 1; i <= 5; i++)
     {
        cout<<i<<"    "<<i+1<<"    "<<pow(i, i+1)<<endl;
     }

    return 0;
 }
