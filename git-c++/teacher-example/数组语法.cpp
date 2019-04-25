// 一维数组，所谓的数组就是一组数的集合；

#include <iostream>

using namespace std;

int main()
{
	// array就是数组名，这个地方定义了一个具有10个整型元素的数组array
	// 后面的{}叫做数组元素的初始化。
	// array后面的[10]表示数组元素的个数为10；
	//数组元素的编号从0开始，最大为数组元素个数-1，在此，最大的数组元素编号为9；
	//数组元素的引用通过数组名和下标运算符结合来指示元素，例如array[0]表示数组的第一个元素
	// array[i]表示数组里的第i+i个元素。
#if 0
	int array[10]={1,2,3,4,5,6,7,8,9,10};

	//数组元素的初始化
	int array1[10]={1}; // 如果初始化列表里只有一个元素0，那么后面的元素默认初始化为0


	for(int i=0; i<10; i++)
		cout << array1[i] << endl;
#endif

	int Days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year, month, day;
	int months=1;
	int counts=0;

label:
	cout << "Inpu a Date: " << endl;
	cin >> year >> month >> day ;
	
	if(year>=0 && (month>=1 && month<=12))
	{
		if(0==year%400||0==year%4&&0!=year%100)			
			Days[2]+=1;
		if(day<=0 || day>Days[month])
		{
			cout << "Date非法,reput again!" << endl;
			goto label;
		}

	}
	else
	{
		cout << "Date非法,reput again!" << endl;
		goto label;
	}

	if(0==year%400||0==year%4&&0!=year%100)			
		Days[2]+=1;	

	for(months=1; months<month; months++)
		counts+=Days[months];
	counts+=day;
	cout << "Date: " << year << "-" << month << "-" << day << " is the " << counts 
		<< "th day in the year " << year << endl;
	
	return 0;
}

