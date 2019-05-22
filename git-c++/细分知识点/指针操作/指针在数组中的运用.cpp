#include <iostream>

using namespace std;

int main()
{
	int list[6] = {0,1,2,3,4,5};
	int* p = list;//指针存储了数组的地址
	//数组名已经代表了数组的地址
	//等价于int* p = &list[0];

	cout<<list<<endl;
	//数组名已经被当做数组的指针
	cout<<list[1]<<endl;

	cout<<*(list)<<endl;
	cout<<*(p)<<endl;
	cout<<p[2]<<endl;

	//直接把后面的字符当做字符串处理？？
	char* const pCity = "Dallas";
	cout<<pCity<<endl;
	cout<<*pCity<<endl;
	cout<<*(pCity+1)<<endl;

	char* city = "Dallas";
	cout<<city[0]<<endl;
	
	char* cities[]={"Dallas","Atlanta","Houston"};
	cout<<cities[0]<<endl;
	cout<<cities[0][0]<<endl;

	return 0;
}