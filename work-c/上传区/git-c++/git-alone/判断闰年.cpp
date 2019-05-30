/**
 * function:    判断是否是闰年
 * Author:      崔秦
 * Date:        20190306
 * version:     1.0
 * thinking:
 * #判断闰年        能被4整除同时不被100整除、能被400整除
 * #判断非法字符    ！输入时：利用while循环确定输入字符是否符合要求
 *                   ！！在输入年份时：判断是否为合法的数据类型：cin.good():输入一致的类型返回true
 *                      同时，需要清除cin缓存区的值，防止死循环
 */

#include <iostream>

using namespace std;

int main()
{
    int int_year ;
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
        cout<<"请输入一个年份"<<endl;
        cin>>int_year;

        while(cin.good()!=1)
		{
			cout << "您的输入有误，请输入大于0的数字 " << endl;
			//通过cin.clear,我们能确认它的内部标识符,如果输入错误则！能！重新输入.结合真正的清空数据流方法cin.sync()
			cin.clear();
			cin.sync();
			cin >> int_year;
		}

        if( (0 == int_year % 400)||( 0 == int_year % 4 && 0!= int_year % 100))
        {
            cout<<"输入的年份是闰年"<<endl;
        }
        else
        {
            cout<<"输入的不是闰年"<<endl;
        }

        cout<<"如果你想退出请输入y，否则输入n"<<endl;
        cin>>ch;

        while('y'!=ch && 'n'!=ch)
        {
            cout<<"你输入的不是y或者n"<<endl;
            cin >>ch;
        }

    }

    return 0;
}
