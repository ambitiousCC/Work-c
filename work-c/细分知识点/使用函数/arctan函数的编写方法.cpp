#include <iostream>

using namespace std;

double arctan(double x);
int main()
{
	cout<<arctan(3.14/4)<<endl;

	return 0;
}

double arctan(double x)
{
	double sqr = x * x;//x-x^3/3 + x^5/5 + ...
	double e = x;
	double r = 0;
	int i = 1;
	while(e / i > 1e-15)//精度要求！！！！
	{
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e = e * sqr;//成二倍递增
		i += 2;
	}

	return r;
}