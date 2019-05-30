/**
 *  Author      ´ÞÇØ
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    pound with kilograms
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double num;
     cout<<"Enter a value for pounds: ";
     cin>>num;

     double foot = 0.454;

     double kilograms = num * foot;

     cout<<num<<" pounds is "<<kilograms<<" kilograms"<<endl;

     return 0;
 }
