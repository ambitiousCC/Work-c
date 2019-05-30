/**
 *  @Author     崔秦
 *  @Date       2019/4/10
 *  @Version    1.0
 *  @Function   判断能不能被整除
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int num;
     cout<<"Enter an integer: ";
     cin>>num;

     if(0 == num % 5 && 0 == num % 6)
     {
        cout<<"Is "<<num<<"divisible by 5 and 6?true"<<endl;
     }
     else if(0 == num % 5 || 0 == num % 6)
     {
        cout<<"Is "<<num<<"divisible by 5 and 6?false"<<endl;
        cout<<"Is "<<num<<"divisible by 5 or 6?true"<<endl;
        cout<<"Is "<<num<<"divisible by 5 or 6, but not both?true"<<endl;
     }
     else
     {
        cout<<"Is "<<num<<"divisible by 5 and 6?false"<<endl;
        cout<<"Is "<<num<<"divisible by 5 or 6?false"<<endl;
        cout<<"Is "<<num<<"divisible by 5 or 6, but not both?false "<<endl;
     }
     return 0;
 }
