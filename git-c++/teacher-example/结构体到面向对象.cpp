#include <iostream>
#include <stack>

using namespace std;

// 结构体的声明
class 
struct Time
{
 // 默认：所有的数据成员和成员函数的访问方式均为public 
private:
	int day;
	 int month;
	 int year;

public:
	 Time() // 构造函数
	 {
		year=2019;
		month=6;
		day=12;
	 }

	 Time(int y, int m, int d)
	 {
		SetDate(y, m, d);
	 }

	 // get函数（Java：get方法）
	 int getYear()
	 {
		return year;
	 }
	 int getMonth()
	 {
		return month;
	 }
	 int getDay()
	 {
		return day;
	 }
	
	 // set函数（Java：set方法）
	 void setYear(int y)
	 {
		year=y;
	 }
	 void setMonth(int m)
	 {
		month=m;
	 }
	 void setDay(int d)
	 {
		day=d;
	 }
	 
	 void SetDate(int y, int m, int d)
	 {// software reuse 软件复用，降低软件维护的代价
		setYear(y);
		setMonth(m);
		setDay(d);
	 }

#if 0
	 Time~() // 析构函数
	 {
		
	 }
#endif
};


int main()
{
	Time t;
	cout << t.getYear() << " " << t.getMonth() << " " << t.getDay() << endl;
	//t.year=2019;
	//t.month=6;
	//t.day=12;
	Time t1(1981, 11, 1);
	cout << t1.getYear() << " " << t1.getMonth() << " " << t1.getDay() << endl;

	t1.setYear(2000);
	cout << t1.getYear() << " " << t1.getMonth() << " " << t1.getDay() << endl;
	cout << "t1.month: " << t1.getMonth() << endl;
	t1.setMonth(10);
	cout << "t1.month: " << t1.getMonth() << endl;
	
	
	return 0;
}
