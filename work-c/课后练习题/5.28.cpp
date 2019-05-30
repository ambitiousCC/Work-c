#include <iostream>

using namespace std;

unsigned fac(unsigned n);
void sum(unsigned m);
int main()
{
	for(int i = 10000; i <= 100000; i += 10000)
	{
		sum(i);
	}
	
	return 0;
}

unsigned fac(unsigned n)
{
	unsigned f;
	if(n==0)
		f = 1;
	else
		f = fac(n - 1) * n;//ºÍµÝ¹éº¯ÊýÏàËÆ
	return f;
}

void sum(unsigned m)
{
	double e;
	for(int i = 1; i <= m; i++)
	{
		e += 1 / (float)fac(i);
	}

	cout<<e<<endl;
}