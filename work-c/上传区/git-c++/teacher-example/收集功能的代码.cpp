/*
 * function:    Integrated Function Demo Program
 * version:     1.0
 * author:      yyh
 * date:        2019-3-20
 * email:       feifanyyh@163.com
 * copyright reserved
 */
#include <iostream>

using namespace std;

int main()
{
    int choice;
    int number;
    int year;
    int month;
    int day;
    char ch;
    int Days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int count=0;
    int iWeek;

    cout << "Welcome to Using software tools" << endl;
    cout << "1 to judge 回文数\n";
    cout << "2 to judge leap year\n";
    cout << "3 to judge Date\n";
    cout << "4 to 素数判定程序\n";
    cout << "0 to quit\n";
    cout << "please input your choice[0,1,2,3]:";
    cin >> choice;

    if(0==choice)
        cout << "you are tired, you will quit the program!";

    for(;choice;)
    {
        switch(choice)
        {
            case 0:
                cout << "you are tired, you will quit the program!";
                return 0;
            case 1:
                // 回文数
                cout << "你在使用回文数判定程序\n";
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "本次判定开始...\n";
                    cout << "Input a number:" << endl;
                    cin >> number;

                    if(number/10000==number%10 && number%10000/1000==number%100/10)
                        cout << number << " is 回文数" << endl;
                    else
                        cout << number << " is not 回文数" << endl;
                    cout << "本次判定结束...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;

            case 2:
                // 闰年
                cout << "你在使用闰年判定程序\n";;
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "本次判定开始...\n";

                    cout << "Input a year:" << endl;
                    cin >> year;

                    if(year%400==0 || (year%4==0&&year%100!=0))
                        cout << year << "is leap year" << endl;
                    else
                        cout << year << "is not leap year" << endl;
                    cout << "本次判定结束...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;

            case 3:
                // 日期判定
                cout << "你在使用日期判定程序\n";;
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "本次判定开始...\n";

                    cout << "Input a date (year month day):" << endl;
                    cin >> year >> month >> day;

                    if(year%400==0 || (year%4==0&&year%100!=0))
                        Days[month]++;

                    for(int i=1; i<month; i++)
                        count+=Days[i];
                    count+=day;
                    cout << "Today is the " << count << "th day int the year " << year << endl;

                    // 判断星期几
                    if (month==1 || month==2)
                    {
                        month+=12;
                        year--;
                    }
                    //基姆拉尔森计算公式
                    iWeek=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;

                    switch (iWeek)
                    {
                        case 0: cout << "星期一" << endl; break;
                        case 1: cout << "星期二" << endl; break;
                        case 2: cout << "星期三" << endl; break;
                        case 3: cout << "星期四" << endl; break;
                        case 4: cout << "星期五" << endl; break;
                        case 5: cout << "星期六" << endl; break;
                        case 6: cout << "星期日" << endl; break;
                    }

                    cout << "本次判定结束...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;
            case 4:
                 // 素数判定程序

                cout << "你在使用素数判定程序\n";;
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "本次判定开始...\n";

                    // 素数判定程序

                    cout << "本次判定结束...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;
            }

            cout << "Welcome to Using software tools" << endl;
            cout << "1 to judge 回文数\n";
            cout << "2 to judge leap year\n";
            cout << "3 to judge Date\n";
            cout << "4 to 素数判定程序";
            cout << "0 to quit\n";
            cout << "please input your choice[0,1,2]:";
            cin >> choice;
        }

    return 0;
}
