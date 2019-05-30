/**
 *  @Author     崔秦
 *  @Date       2019/4/10
 *  @Version    1.0
 *  @Function   美元和人民币的转化
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double rate;
     cout<<"Enter the exchange rate from dollars to RMB: ";
     cin>>rate;

     int choice;
     cout<<"Enter 0 to convert dollars to RMB and 1 vice versa: ";
     cin>>choice;

     double amount, fin;

     if(0 == choice)
     {
         cout<<"Enter the dollar amount: ";
         cin>>amount;
         fin = amount * rate;
         cout<<"$"<<amount<<" is "<<fin<<" yuan"<<endl;
     }
     else if(1 == choice)
     {
         cout<<"Enter the RMB amount: ";
         cin>>amount;
         fin = amount / rate;
         cout<<amount<<"yuan is $"<<fin<<endl;
     }
     else
     {
         cout<<"Incorrect input";
     }

     return 0;
 }
