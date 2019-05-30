#include <iostream>

using namespace std;

//有默认参数的形参必须列在形参列表的最右边，结合的次序是从左向右
//不能间接弄

//定义在前就在定义函数的时候加入默认值，原型声明在前就在原型声明的时候加入默认值

int addition(int x = 1, int y = 2);
int main()
{
	int a = 2,
		b = 6;

	cout<<addition(a, b)<<endl;
	cout<<addition(a)<<endl;
	cout<<addition(b)<<endl;
	cout<<addition()<<endl;
	
	return 0;
}

int addition(int x, int y)
{
	return x+y;
}