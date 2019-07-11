/*
	strlen是函数，只能以字符串作为参数，而且是计算到'\0'之前结束
	sizeof 是编译的时候就已经将结果计算出来了，指的是类型所占空间的字节数
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int a(12);
	cout<<"a="<<a<<endl;

/*	int b{12};
	cout<<"b="<<b<<endl;
*/
	char m[] = "opq";
	char n[] = {'o','p','q'};
	int s[] = {'o','p','q'};
	cout<<"size of m :"<<sizeof(m)<<endl;//4 包含结束符
	cout<<"size of n :"<<sizeof(n)<<endl;//3 数组
	cout<<"size of s :"<<sizeof(s)<<endl;//12 一个整形4
	cout<<"len of m :"<<strlen(m)<<endl;//3 字符串长度
	cout<<"len of n :"<<strlen(n)<<endl;//12 是随机值和编译器有关
	cout<<"change of s :"<<(int)sizeof(s)<<endl;//12 是在内存中所占的长度，3*4

	return 0;
}
