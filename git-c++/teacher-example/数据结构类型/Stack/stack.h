/*****************************************************************
 ## 文件名：stack.h
 ## 作者：	Berkeley
 ## 功能：	顺序栈的定义以及其操作的声明
 ## 版本：	V1.0
 ****************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

#define STACK_INIT_SIZE 100 // 存储空间初始分配量
#define STACKINCREMENT	10  // 存储空间分配增量

#define OK			0 
#define ERROR		1
#define OVERFLOW	2

#define FALSE		0 
#define TRUE		1

typedef int Status;  // 类型定义

typedef struct {
	int *base;		// 在栈构造之前和销毁之后，base的值为null
	int *top;		// 栈顶指针
	int stacksize;	// 当前已分配的存储空间，以元素为单位
}SqStack;

//***********栈操作的声明********************************************
//构造一个空栈
Status InitStack(SqStack &S);

//销毁栈S，S不再存在
Status DestroyStack(SqStack &S);

//把S置为空栈
Status ClearStack(SqStack &S);

//若栈S为空栈，则返回TRUE，否则返回FALSE
Status StackEmpty(SqStack S);

//返回S的元素个数，即栈的长度
int StackLength(SqStack S);

//若栈不空，则用e返回S的栈顶元素，并返回OK，否则返回ERROR
Status GetTop(SqStack S, int &e);

//插入元素e为新的栈顶元素
Status Push(SqStack &S, int e);

//若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
Status Pop(SqStack &S, int &e);

//栈中元素的访问函数
int myvisit();

//从栈底到栈顶依次对栈中每个元素调用函数visit()。一旦visit()失败，则操作失败
Status StackTraverse(SqStack S, int ( *visit)());