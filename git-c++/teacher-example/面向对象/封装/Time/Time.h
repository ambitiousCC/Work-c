// Time: Time.h
// Time 抽象数据类型的声明
// Time类成员的定义在Time.cpp中，这样做是为了实现接口与实现的分离.

// 封装：将数据和对数据的操作封装在一起，组成一种新的数据类型。

// 防止头文件重复包含
#ifndef TIME_H
#define TIME_H

// Time 抽象数据类型的声明
class Time 
{
public:
	// 构造函数：创建类对象时自动调用，主要完成对象创建时有关的初始化工作
	Time(); //无参构造函数，只要提供任何一个构造函数，编译器都不会提供默认的无参构造函数
	Time(int h); //一参构造函数
	Time(int h, int m); //二参构造函数
	Time(int h, int m, int s); //三参构造函数
	//Time( int = 0, int = 0, int = 0 ); // 缺省构造函数

	// 析构函数：对象撤销时，析构函数自动调用，它本身并不释放对象占用的内存空间，它只是在系统回收对象的
	// 内存空间之前执行扫尾工作，这样内存可以重新用于保存新的对象。如果没有定义析构函数，编译器会提供一
	// 个“空的”析构函数。无参数，无返回值。
	~Time();

	// set 函数：主要便于类的客户设置私有成员，需要提供数据的有效性验证
	void setTime( int, int, int ); // set hour, minute, second
	void setHour( int ); // set hour (after validation)
	void setMinute( int ); // set minute (after validation)
	void setSecond( int ); // set second (after validation)

	// get 函数：主要便于类的客户访问私有成员，也叫访问函数
	int getHour() const; // return hour
	int getMinute() const; // return minute
	int getSecond() const; // return second
	
	// 访问函数
	void Print_Universal(); // output time in universal-time format
	void Print_Standard(); // output time in standard-time format
private:
	int hour; // 0 - 23 (24-hour clock format)
	int minute; // 0 - 59
	int second; // 0 - 59
	
	// 工具函数：主要为其它成员函数提供服务
	void printUniversal(); // output time in universal-time format
	void printStandard();  // output time in standard-time format

}; // end class Time

#endif
