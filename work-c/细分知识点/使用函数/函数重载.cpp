#include <iostream>

using namespace std;

//根据传入的参数类型来使用对应的函数
//不能用返回值来区分比如void 和 int
//不要搞不同功能的重载
//往往实现相同或者类似的功能

int sumOfSquare(int a, int b)
{
	return a*a + b*b;
}
double sumOfSquare(double a, double b)
{
	return a*a + b*b;
}
int main()
{
	double a = 1.4,
		b = 3.3;
	int c = 2,
		d = 4;

	cout<<sumOfSquare(a, b)<<endl;
	cout<<sumOfSquare(c, d)<<endl;

	return 0;
}