/**
 *  Author      cuiqin
 *  Date        2019/3/29
 *  Version     1.0
 *  Function    exchange money unit
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double money;
     cout<<"Enter the total money: ";
     cin>>money;

     int remainingAmount = static_cast<int>(money * 100);

     int numberDollar  = remainingAmount / 100;
     remainingAmount = remainingAmount % 100;

     int numberQurters = remainingAmount / 25;
     remainingAmount = remainingAmount % 25;

     int numberDimes = remainingAmount / 10;
     remainingAmount = remainingAmount % 10;

     int numberNickels = remainingAmount / 5;
     remainingAmount = remainingAmount % 5;

     int numberPenny = remainingAmount;

     int m[5] = {numberDollar, numberQurters, numberDimes, numberNickels, numberPenny};
     string n[5] = {" dollars", " quarters", " dimes", " nickels", " pennies"};

    cout<<"Your amount "<<money<<" consists of ";
    for(int i = 0; i < 5; i++)
    {
        if(m[i] != 0)
        {
            cout<<m[i]<<n[i];
        if(i < 4)
            cout<<",";
        else
            cout<<".";
        }
    }

    return 0;
 }
