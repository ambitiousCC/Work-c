#include <iostream>

using namespace std;


class Clock{
public :
	//构造函数可以联系构造器
	//描述初始化算法：童颜是初始时
	//不能定义返回值类型
	//不能将一个没有参数的构造函数与有的放在一个类中

	//希望隐含生成默认构造函数
	//Clock() = default;
	Clock(int newH,int newM, int newS);//可以有参数，可以为空;
	Clock();
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();

private:
	int hour,minute,second;
};
inline void Clock::showTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock::Clock(int newH,int newM, int newS):hour(newH),minute(newM),second(newS)//初始化列表形参值直接赋值给成员变量
{}

void Clock::setTime(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
}

int main()
{
	Clock c(10,20,60);//构造对象

	c.showTime();
	return 0;
}


