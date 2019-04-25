#include <iostream>

using namespace std;

void swap(int, int);
void swap1(int &, int &);
void swap2(int *, int *);
int main()
{
	int a = 1,
		b = 2,
		c = 1,
		d = 2;
	int *p, *q;
	p = &c;
	q = &d;

	swap(a, b);//发现不能改变原来的值
	cout<<a<<" "<<b<<endl;
	swap1(a, b);//值引用交换值
	cout<<a<<" "<<b<<endl;
	swap2(p,q);//利用指针存储地址交换值
	cout<<c<<" "<<d<<endl;

	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap1(int &c, int &d)
{
	int temp = c;
	c = d;
	d = temp;
}

void swap2(int *e, int *f)
{
	int temp = *e;
	*e = *f;
	*f = temp;
}
