/*****************************************************************
 ## 文件名：stack.cpp
 ## 作者：	Berkeley
 ## 功能：	顺序栈的定义以及其操作的完整实现
 ## 版本：	V1.0
 ****************************************************************/

#include "stack.h"


//***********栈操作的定义*****************************************
//构造一个空栈
Status InitStack(SqStack &S)
{
	S.base = (int *)malloc(STACK_INIT_SIZE *sizeof(int));

	if(!S.base)
		exit(OVERFLOW); //存储分配失败

	S.top=S.base;

	S.stacksize=STACK_INIT_SIZE;

	return OK;
}

//销毁栈S，S不再存在
Status DestroyStack(SqStack &S)
{
	if(!S.base)
	{
		cout << "栈并不存在" << endl;
	}
	else
	{
		S.stacksize=0;
		S.top=NULL;
		free(S.base);
		S.base=NULL;
		cout << "栈已被销毁" << endl;
	}

	return OK;
}

//把S置为空栈
Status ClearStack(SqStack &S)
{
	if(!S.base)
	{
		cout << "栈并不存在" << endl;
	}
	else
	{
		S.top=S.base;
	}
	return OK;
}

//若栈S为空栈，则返回TRUE，否则返回FALSE
Status StackEmpty(SqStack S)
{
	if(!S.base)
	{
		cout << "栈不存在，所以也是空栈" << endl;
		return TRUE;
	}
	else
	{
		if(S.top==S.base)
			return TRUE;
		else
			return FALSE;
	}	
}

//返回S的元素个数，即栈的长度
int StackLength(SqStack S)
{
	return S.top-S.base;		
}

//若栈不空，则用e返回S的栈顶元素，并返回OK，否则返回ERROR
Status GetTop(SqStack S, int &e)
{
	if(S.top==S.base)
		return ERROR;
	
	e=*(S.top-1);

	return OK;
}

//插入元素e为新的栈顶元素
Status Push(SqStack &S, int e)
{
	if(S.top-S.base>=S.stacksize)
	{
		S.base=(int *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(int));
		
		if(!S.base)
			exit(OVERFLOW);

		S.top=S.base + S.stacksize;
		S.stacksize += STACKINCREMENT;
	}

	*S.top++ = e;

	return OK;
}

//若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
Status Pop(SqStack &S, int &e)
{
	if(S.top==S.base)
		return ERROR;
	
	e=*--S.top;
	
	return OK;
}

//栈中元素的访问函数
int myvisit()
{
	cout << "已被访问!" << endl;
	return OK;
}

//从栈底到栈顶依次对栈中每个元素调用函数visit()。一旦visit()失败，则操作失败
Status StackTraverse(SqStack S, int ( *visit)())
{
	int e;
	while(!StackEmpty(S))
	{
		Pop(S,e);
		(*visit)();
	}

	return OK;
}