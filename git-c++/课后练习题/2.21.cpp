/**
 *  Author      ¥ﬁ«ÿ
 *  Date        2019/3/25
 *  Version     1.0
 *  Function    º∆À„ª®∑—
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double di, mi, pr;
     cout<<"Enter the driving distance: ";
     cin>>di;
     cout<<"Enter miles per gallon: ";
     cin>>mi;
     cout<<"Enter price per gallon: ";
     cin>>pr;

     double gr = di / mi;
     double money = pr * gr;

     cout<<"The cost of driving is $"<<money<<endl;

     return 0;
 }
