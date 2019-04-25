#include <iostream>
//使用时候需要引入头文件

using namespace std;

class Clock{
	public://公有成员
		void setTime(int newH = 0
			,int newM = 0
			,int newS = 0);
		void showTime();
	private://私有成员
		int hour = 0,
			minute = 0,
			second = 0;
};

int main()
{
	Clock myClock;
	myClock.setTime(8,30,30);
	myClock.showTime();
	return 0;
	//实现成员函数

}
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime()
{
	cout<<hour<<":"<<minute<<":"<<second;
}