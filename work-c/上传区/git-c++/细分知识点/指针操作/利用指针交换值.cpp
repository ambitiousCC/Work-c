#include <iostream>

using namespace std;

void swap0(int &m, int &m);
void swap1(int *a,int *a);

int main()
{
	int a, b;
	cin>>a>>b;

	cout<<"before"<<a<<" "<<b;
	swap0(a, b);

	cout<<"a = "<<a<<", b= "<<b<<endl;

	swap1(&a, &b);

	cout<<"a = "<<a<<", b= "<<b<<endl;
	return 0;

}

void swap0(int &m, int &n)
{
	int temp;
	m = temp;
	n = m;
}
void swap1(int *a, int *b);
{
	int temp;
	*a = *b;
	*b = temp;
}