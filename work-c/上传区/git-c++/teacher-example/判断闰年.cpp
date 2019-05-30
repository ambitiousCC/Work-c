#include <iostream>

using namespace std;

int main()
{
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "+++      Welcome to using Leap Year Judgement app     ++" << endl; 
	cout << "+++      开发单位：河南大学计算机与信息工程学院       ++" << endl;
	cout << "+++      版本：1.0							           ++" << endl;
	cout << "+++      版权所有，翻版必究						   ++" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	int year;
	int count=10;

	char ch;
	// while(1)  // while语句的条件永远为真，不会改变
	cout << "如果你现在想判断某年是否是闰年，请输入y，如果想退出，请输入n" << endl;
	cin >> ch;
	// 这个地方是要屏蔽掉所有非y和n的字符
	while('y'!=ch && 'n'!=ch)
	{
		cout << "你输入的字符非法，请重新输入,y to go n to end" << endl;
		cin >> ch;

	}

		while('y'==ch) // while语句的条件随着count值的改变，在某一个时刻发生改变
		{ 
			cout << "Input a year: " << endl;
			cin >> year;

			if( ( 0==year%400 ) || ( 0==year%4 && 0!=year%100 ) )
			{
				cout << year << "  is a leap year! " << endl;	
			}
			else
			{
				cout << year << "  is not a leap year! " << endl; 
			}
			
			cout << "如果你现在想判断某年是否是闰年，请输入y，如果想退出，请输入n" << endl;
			cin >> ch;
			while('y'!=ch && 'n'!=ch)
			{
				cout << "你输入的字符非法，请重新输入,y to go n to end" << endl;
				cin >> ch;

			}
		}	

	
		

	return 0;
}