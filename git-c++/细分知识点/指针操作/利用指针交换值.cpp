#include <iostream>

using namespace std;

void swap0(int &, int &);
void swap1(int *,int *);
//同时函数
int main()
{
	int a, b;
	cin>>a>>b;

	cout<<"before"<<a<<" "<<b;
	swap0(a, b);

	cout<<"a = "<<a<<", b= "<<b<<endl;

	swap1(&a, &b);//引入参数地址

	cout<<"a = "<<a<<", b= "<<b<<endl;
	return 0;

}

void swap0(int &m, int &n)
{
	int temp1 = m;
	n = m;
	m = temp1;
}
void swap1(int *a, int *b)
{
	int temp2 = *a;
	*a = *b;
	*b = temp2;
}