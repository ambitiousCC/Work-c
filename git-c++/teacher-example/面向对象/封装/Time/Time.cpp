// Time: Time.cpp
// Time 类成员的定义
#include <iostream>
#include <iomanip>
#include "Time.h" // 包含Time的定义

using namespace std;

/*****************构造函数**********************************/
// Time构造函数将私有成员初始化为0，保证对象创建于一致状态
Time::Time( ) 
{ 
   setTime( 0, 0, 0 ); // validate and set time
} // end Time constructor

// Time构造函数将私有成员初始化为0，保证对象创建于一致状态
Time::Time(int h) 
{ 
   setTime( h, 0, 0 ); // validate and set time
} // end Time constructor

// Time构造函数将私有成员初始化为0，保证对象创建于一致状态
Time::Time(int h, int m) 
{ 
   setTime( h, m, 0 ); // validate and set time
} // end Time constructor

// Time构造函数将私有成员初始化为0，保证对象创建于一致状态
Time::Time( int h, int m, int s ) 
{ 
   setTime( h, m, s ); // validate and set time
} // end Time constructor


/*****************析构函数**********************************/
Time::~Time() 
{ 
   
} // end Time destructor

/*****************set 函数**********************************/
// set 函数设置时间值，并提供有效性验证
void Time::setTime( int h, int m, int s )
{
   setHour( h ); // set private field hour
   setMinute( m ); // set private field minute
   setSecond( s ); // set private field second
} // end function setTime

// set hour value
void Time::setHour( int h )
{
    // this指针
	this->hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour
} // end function setHour

// set minute value
void Time::setMinute( int m )
{
   this->minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute
} // end function setMinute

// set second value
void Time::setSecond( int s )
{
   second = ( s >= 0 && s < 60 ) ? s : 0; // validate second
} // end function setSecond


/*****************get 函数**********************************/
// return hour value
int Time::getHour()  const
{
   return hour;
} // end function getHour

// return minute value
int Time::getMinute()  const
{
   return minute;
} // end function getMinute

// return second value
int Time::getSecond()  const
{
   return second;
} // end function getSecond

/*****************访问函数**********************************/
void Time::Print_Universal()
{
	printUniversal();
}
void Time::Print_Standard()
{
	printStandard();
}

/*****************工具函数**********************************/
// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
   cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
      << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard
