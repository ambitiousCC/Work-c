/**
 * Author:  崔秦
 * Data:    2019.3.20
 * Version: 1.0
 * Thinking: 出现随机数然后让读者判断
 */
 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 using namespace std;

 int main()
 {

     //程序继承部分
    char ch;
    cout<<"如果你想使用这个app的功能请输入y，否则输入n"<<endl;
    cin>>ch;

    while('y'!=ch && 'n'!=ch)
    {
        cout<<"你输入的不是y或者n"<<endl;
        cin >>ch;
    }

while('y'==ch)
{
     //输出随机数字
     //初始化时间
     srand(time(0));
     int num_1 = rand()%10;//输出0~10的随机数
     int num_2 = rand()%10;
     int answer;

     //排序部分
     int temp = 0;
     if(num_2>num_1)
     {
         temp = num_1;
         num_1 = num_2;
         num_2 = temp;
     }

     //提示部分
     cout<<num_1<<"与"<<num_2<<"的和是多少？";
     cin>>answer;

     if(num_1 + num_2 != answer)
     {
         cout<<"你输入的答案错误"<<endl;
     }
     else
     {
         cout<<"恭喜，你答对了"<<endl;
     }

     cout<<"如果你想你想继续做题，请输入y否则就输入n退出吧"<<endl;
    cin>>ch;

    while('y'!=ch && 'n'!=ch)
    {
        cout<<"你输入的不是y或者n"<<endl;
        cin >>ch;
    }
}

     return 0;
 }

