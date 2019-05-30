/**
 *  Author      崔秦
 *  Date        2019/3/21
 *  Version     1.0
 *  Function    确定一个foot然后换算输入的数字
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double num;
     cout<<"Enter a value for feet: ";
     cin>>num;

     double foot = 0.305;

     double feet = num * foot;

     cout<<num<<" feet is "<<feet<<" meters"<<endl;

     return 0;
 }
