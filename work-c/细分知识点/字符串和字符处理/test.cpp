#include <iostream>

using namespace std;

void swap0(int &,int &);
void swap1(int *,int *);
int main()
{
	int a = 1,
		b = 2,
		c = 3,
		d = 4;
//	int *p = c;
//	int *q = d;
	int *p,*q;
	p = &c;
	q = &d;
	
	swap0(a, b);
	swap1(p, q);

	cout<<a<<" "<<b<<endl;
	cout<<c<<" "<<d<<endl;

	return 0;
}

void swap0(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap1(int *p, int *q)
{
	int temp2 = *p;
	*p = *q;
	*q = temp2;
}
	
