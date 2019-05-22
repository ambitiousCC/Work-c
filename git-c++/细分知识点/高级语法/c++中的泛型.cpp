#include <iostream>

using namespace std;

//使用模板声明
template <typename T>
T add(T a, T b)
{
	return a + b;
}

int main()
{
	//成立的条件：返回的，输入的类型必须一致
	double num1, num2, sum;//最好同时声明变量
	cin>>num1>>num2;
	sum = add(num1, num2);

	cout<<sum<<endl;

	return 0;
}

