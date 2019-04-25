#include <iostream>

using namespace std;

inline double s(double r)//减少开销从而增加inline关键词
{
	double PI = 3.1415;
	return PI*r*r;
}

int main()
{
	//
	//实现的都是比较简单的函数，同时有时候编译器可能自动把某些函数自动当做内联函数处理，不能有循环语句和switch语句
	//内联函数的定义必须出现在内联函数第一次被调用之前
	//对内联函数不能进行异常接口声明
	double r;
	cin>>r;

	double area = s(r);
	
	cout<<area<<endl;
	
	return 0;
}
