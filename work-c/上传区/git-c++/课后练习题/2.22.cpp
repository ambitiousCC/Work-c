/**
 *  Author      ´ŞÇØ
 *  Date        2019/3/27
 *  Version     1.0
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double ba, interestRate;
     cout<<"Enter balance and interest rate (e.g., 3 for 3%): ";
     cin>>ba>>interestRate;

     double in = ba * (interestRate / 1200);

     cout<<"The interest is "<<in<<endl;

     return 0;
 }
