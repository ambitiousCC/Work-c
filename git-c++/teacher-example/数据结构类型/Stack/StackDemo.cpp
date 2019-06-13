/*****************************************************************
 ## 文件名：StackDemo.cpp
 ## 作者：	Berkeley
 ## 功能：	顺序栈的定义以及其操作
 ## 版本：	V1.0
 ****************************************************************/

#include "stack.h"

int main()
{
	SqStack S;
	if(ERROR == InitStack(S))
		cout << "栈初始化失败！" << endl;
	else
		cout << "栈初始化成功！" << endl;
	
	if(TRUE==StackEmpty(S))
		cout << "栈空！" << endl;
	else
		cout << "栈不空！" << endl;

	cout << "将0-9的元素进栈" << endl;
	for(int i=0; i<10; i++)
		Push(S, i);
	
	if(TRUE==StackEmpty(S))
		cout << "栈空！" << endl;
	else
		cout << "栈不空！" << endl;

	int e;
	GetTop(S, e);
	cout << "栈顶元素为： " << e << endl;

	for(int j=0; j<3; j++)
	{
		Pop(S, e);
		cout << "出栈元素为： " << e << "  ";
	}
	cout << endl;
	
	GetTop(S, e);
	cout << "栈顶元素为： " << e << endl;

	cout << "栈的长度是： " << StackLength(S) << endl;

	cout << "将栈清空！ " << endl;
	ClearStack(S);
	if(TRUE==StackEmpty(S))
		cout << "栈空！" << endl;
	else
		cout << "栈不空！" << endl;

	cout << "将10个元素进栈" << endl;
	for( i=0; i<10; i++)
		Push(S, i*2);
	if(TRUE==StackEmpty(S))
		cout << "栈空！" << endl;
	else
		cout << "栈不空！" << endl;	
	StackTraverse(S, myvisit);

	cout << "销毁栈" << endl;
	DestroyStack(S);
	if(TRUE==StackEmpty(S))
		cout << "栈空！" << endl;
	else
		cout << "栈不空！" << endl;	

	StackTraverse(S, myvisit);

	return 0;
}