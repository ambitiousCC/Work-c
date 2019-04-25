/**
 *  @Authour:   崔秦
 *  @Date:      2019/3/13
 *  @Function:  计算日期所在当年的第几天以及对应星期
 *  @Thinking:  1.年份对应二月日数
 *              2.月份对应不同天数：
 *                  1 31 2 28/29 3 31 4 30 5 31 6 30 7 31 8 31 9 30 10 31 11 30 12 31
 *              3.输入的年份与已知年的差，除以四获得年中隔了多少闰年：2019-2015=4  * 1
 *               2019 - 2008 = 11/4 = 2 .. 3 2019-2013 6 1...2 2019-2016 3 ...3
 *               如果余数是三，商加1
 *              4.2015 3 22 隔一个闰年 三年(4 - 1) 3-闰年个数y2=普通年y1  y1*365+y2*366 + 当年所隔的天数 / 7
 *                2016 3 22 一个        两年(3 - 1)
 *                2020     一年(2020-2019)
 *                2021      两年(2021-2019) ...2
 *                  在前面的年份：如果余数是2+1
 *                2025      6       2闰年(6/4=1...2)
 *              5.S=(year-1)+[(x-1)/4]-[(x-1)/100]+[(x-1)/400]+C
 *  @More:      非法字符处理 2019/1/1 星期二
 */

#include <iostream>

using namespace std;

int main()
{
    int year,month, day;
    int m;//商
    int n;//余数
    int s;//间距数
    int allDay0,allDay1;//间距天数
    int left;//余年
    int week;//星期
    int sum1;
    int Year[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    //程序继承部分
    char ch;
    cout<<"如果你想使用这个app的功能请输入y，否则输入n"<<endl;
    cin>>ch;

    while('y'!=ch && 'n'!=ch)
    {
        cout<<"你输入的不是y或者n"<<endl;
        cin >>ch;
    }

while('y' == ch)
{
label:
    cout<<"请输入年月日：";
    cin>>year>>month>>day;

    if(year >= 0 && (month<=12 && month>=1))//必须全部满足
    {
        if((0 == year % 400)||( 0 == year % 4 && 0!= year % 100))
        {
            Year[2] = 29;
        }
        if(day < 1 || day > Year[month])//任意一种成立都非法！！
        {
            cout<<"输入日期格式不正确"<<endl;
            goto label;
        }
    }
    else
    {
        cout<<"输入的年月不正确"<<endl;
        goto label;
    }

    int sum0 = 0;//如果不进行初始化就会使用系统的初始值
    //first: judge from the year
    if((0 == year % 400)||( 0 == year % 4 && 0!= year % 100))
    {
        //leap year
        //second: month
        Year[2] = 29;
        for(int i = 0; i < month; i++)
        {
            sum0 = sum0 + Year[i];
        }
        sum1 = sum0 + day;
        cout<<year<<"年"<<month<<"月"<<day<<"日"<<"是"<<year<<"的第"<<sum1<<"天";

        //week
        //判断在之前之后
    }
    else
    {
        //simple year
        Year[2] = 28;
        for(int i = 0; i < month; i++)
        {
            sum0 = sum0 + Year[i];
        }
        sum1 = sum0 + day;
        cout<<year<<"年"<<month<<"月"<<day<<"日"<<"是"<<year<<"的第"<<sum1<<"天";
    }

        if(year < 2018)
        {
            s = 2018 - year;
            m = s / 4;
            n = s % 4;
            if(3 == n)
            {
                m += 1;
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + (365-sum1);//获得的间距天数
            }
            else
            {
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + (365-sum1);
            }
            week = allDay1 % 7;
            switch(week)
            {
            case 0:
                cout<<",星期一"<<endl;
                break;
            case 1:
                cout<<",星期日"<<endl;
                break;
            case 2:
                cout<<",星期六"<<endl;
                break;
            case 3:
                cout<<",星期五"<<endl;
                break;
            case 4:
                cout<<",星期四"<<endl;
                break;
            case 5:
                cout<<",星期三"<<endl;
                break;
            case 6:
                cout<<",星期二"<<endl;
                break;
            }
        }
        else if(year > 2019)
        {
            s = year - 2019;
            m = s / 4;
            n = s % 4;
            if(2 == n)
            {
                m += 1;
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + sum1;//获得的间距天数
            }
            else
            {
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + sum1;
            }
            week = allDay1 % 7;
            switch(week)
            {
            case 0:
                cout<<",星期一"<<endl;
                break;
            case 1:
                cout<<",星期二"<<endl;
                break;
            case 2:
                cout<<",星期三"<<endl;
                break;
            case 3:
                cout<<",星期四"<<endl;
                break;
            case 4:
                cout<<",星期五"<<endl;
                break;
            case 5:
                cout<<",星期六"<<endl;
                break;
            case 6:
                cout<<",星期日"<<endl;
                break;
            }

        }
        else if(2018 == year)
        {
            week = (365 - sum1) % 7;//-1
            switch(week)
            {
            case 0:
                cout<<",星期一"<<endl;
                break;
            case 1:
                cout<<",星期日"<<endl;
                break;
            case 2:
                cout<<",星期六"<<endl;
                break;
            case 3:
                cout<<",星期五"<<endl;
                break;
            case 4:
                cout<<",星期四"<<endl;
                break;
            case 5:
                cout<<",星期三"<<endl;
                break;
            case 6:
                cout<<",星期二"<<endl;
                break;
            }
        }
        else if(2019 == year)
        {
            week = (sum1-1) % 7;
            switch(week)
            {
            case 0:
                cout<<",星期二"<<endl;
                break;
            case 1:
                cout<<",星期三"<<endl;
                break;
            case 2:
                cout<<",星期四"<<endl;
                break;
            case 3:
                cout<<",星期五"<<endl;
                break;
            case 4:
                cout<<",星期六"<<endl;
                break;
            case 5:
                cout<<",星期日"<<endl;
                break;
            case 6:
                cout<<",星期一"<<endl;
                break;
            }
        }
        cout<<"如果你想退出请输入n，否则输入y"<<endl;
        cin>>ch;

        while('y'!=ch && 'n'!=ch)
        {
            cout<<"你输入的不是y或者n"<<endl;
            cin >>ch;
        }
}

    return 0;
}
