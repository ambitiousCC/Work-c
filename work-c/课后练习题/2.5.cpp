/**
 *  Author      崔秦
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    输入本金和利率，然后总额=本金+税
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double subtotal,gratuity;
     cout<<"Enter the subtotal and a gratuity rate: ";
     cin>>subtotal>>gratuity;

     double rate = gratuity / 100;
     double fax = subtotal * rate;

     double sub = subtotal + fax;

     cout<<"The gratuity is $"<<fax<<" and total is $"<<sub<<endl;

     return 0;
 }
