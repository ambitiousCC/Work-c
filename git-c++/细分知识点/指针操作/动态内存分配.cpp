#include <iostream>
using namespace std;
int main()
{
	//匹配使用的语法：malloc / free 、 new / delete 、 new[]/ delete[] 
	int* i = new int;//分配4
	int* m = new int(3);//分配4 初始化3
	int* n = new int[3];//分配12 3*4

//从而解释析构函数：~() 是用来清理对象的，而delete是用来清理空间的函数





	delete i;//撤销
	delete m;
	delete[] n;

	return 0;
}