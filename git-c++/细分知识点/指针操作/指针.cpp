#include <iostream>
using namespace std;
void print(int* i);
int main()
{
	int i = 0;
	//&a 表示的是a的地址 此时 a 就是地址所在内存的值
	//*a 表示的是指针指向的内存的存储的值 而声明了一个指针以后 a 就是地址

	int *p = NULL;//声明空指针
	if(!p)//空的地址
		cout<<"*p = NULL = "<<p<<endl;

	//指针运算：表示地址，因而运算的是下一个地址位置注意不同数据类型有不同的长度，地址长度也不同
	int var[3] = {1,2,3};
	int *ptr;
	ptr = var;//指针中存储的是数组的地址
	for(i =0; i <3;i++)
	{
		cout<<"var["<<i<<"]地址: "<<ptr<<endl;
		cout<<"var["<<i<<"]指向内存中的数据: "<<*ptr<<endl;
		ptr++;//指针移动到下一个位置
	}


	//对于数组：数组名就是一个指针
	//*var 表示 数组指针 指向的存储空间的存储值 
	//var  表示 指向数组开头的常量 就是数组存储地址 常量是不可以自增自减的

	for(i = 0;i <3;i ++)
	{
		*(var+i) = i;//表示的是给数组赋值
		//var 常量不能自增自减
		cout<<"var["<<i<<"]赋值数组之后:"<<*(var+i)<<endl;
	}

	//超级有意思的指针指向指针
	i = 5;
	int **ppt;
	ptr = &i;//给ptr指针赋予i的地址
	ppt = &ptr;//给ppt指针赋予ptr的地址

	cout<<"i : "<<i<<endl;
	cout<<"*ptr : "<<"("<<ptr<<")"<<*ptr<<endl;
	cout<<"**ppt : "<<"("<<ppt<<")"<<**ppt<<endl;

	//知道了声明一个指针，指针存储了地址，所以需要的是地址，所以给函数传递的是变量的地址
	print(&i);

	return 0;
}
void print(int *i)
{
	cout<<*i<<endl;
}