#include <iostream>

using namespace std;

int main()
{
	int val1 = 9,
		val2 = 3;
	auto val = val1 + val2;

	//希望使用某一个表达式的初始值但是不希望是初始值类型
	decltype(i) j = 3;//尽管3是初始值int类型，但是j的类型与i保持一致