#include <iostream>
#include <string>

using namespace std;

int main()
{
	//可以直接取用字符串中指定位置字符
	string a = "abc";
	cout<<a[1]<<endl;//b

	//根据字典比较

	//获取字符串长度
	cout<<a.length()<<endl;  

	//输入整行字符串，第三项是分割符号
	string city;
	getline(cin,city,',');
	cout<<"city: "<<city<<endl;

	return 0;
}