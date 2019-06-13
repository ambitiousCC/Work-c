//函数参数的传递方式

#include <iostream>

using namespace std;

//void swap(int, int);
void swap(int &, int &b);
void swap(int *, int *);

int main()
{
	int numa, numb;
	cin >> numa >> numb;
	cout << "before funtion call" << endl;
	cout << "numa=" << numa << " numb=" << numb << endl;
	//swap(numa, numb);
	swap(&numa, &numb);
	cout << "after funtion call" << endl;
	cout << "numa=" << numa << " numb=" << numb << endl;

	return 0;
}
// 按指针传递，本质上形参是指向实参的地址，可以理解为int *a=&numa; a指向numa，a里面的值是实参的地址。
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}


// 按引用传递，本质上实参是形参的别名，可以理解为int &a=numa; a 和 numa属于同一个内存空间
void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

/*
// 按值传递，本质是值的复制，可以理解为int a=numa; a 和 numa分属不同的内存空间
void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}
*/