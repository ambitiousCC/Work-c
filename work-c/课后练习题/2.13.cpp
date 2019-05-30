/**
 *  Author      崔秦
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    每个月攒钱，每个月有利率，计算第六个月的总金
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    float  monthlySave;
    float rate = 1.00417;
    cout<<"Enter the monthly saving amount: ";
    cin>>monthlySave;

    float monthlySave0 = monthlySave;
    float sub;
    for(int i = 0; i<5; i++)
    {
        monthlySave0 *= rate;
        cout<<monthlySave0<<endl;

        monthlySave0 += monthlySave;
        cout<<monthlySave0<<endl;

    }
    sub = monthlySave0;

    cout<<"After the sixth month, the account value is $"<<sub<<endl;

    return 0;
 }
