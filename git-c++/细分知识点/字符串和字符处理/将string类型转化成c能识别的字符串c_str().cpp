#include <iostream>
#include <string>

using namespace std;

int main()
{
	//使用对象：由于c中没有string所以需要使用string类中的方法将string类型转换成c能处理的char
	char c[20];
	string a = "1234";
	strcpy(c, a.c_str());//由于c_str()函数产生的是临时的指针，不能对其进行操作，所以使用strcpy进行copy

	for(int i = 0; i <a.length(); i++)
		cout<<c[i]<<endl;

	return 0;
}