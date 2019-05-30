/**
 *  @Author     ´ŞÇØ
 *  @Date       2019/4/10
 *  @Function   ÅĞ¶ÏÉúĞ¤Äê
 *  @Version    1.0
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int year;
     cout<<"Enter the year: ";
     cin>>year;

     cout<<"The year of input is: ";
     switch(year % 12)
     {
         case 0: cout<<"monkey"<<endl;break;
         case 1: cout<<"rooster"<<endl;break;
         case 2: cout<<"dog"<<endl;break;
         case 3: cout<<"pig"<<endl;break;
         case 4: cout<<"cat"<<endl;break;
         case 5: cout<<"ox"<<endl;break;
         case 6: cout<<"tiger"<<endl;break;
         case 7: cout<<"rabbit"<<endl;break;
         case 8: cout<<"dragon"<<endl;break;
         case 9: cout<<"snake"<<endl;break;
         case 10: cout<<"horse"<<endl;break;
         case 11: cout<<"sheep"<<endl;break;
     }

    return 0;
 }
