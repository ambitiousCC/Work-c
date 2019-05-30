#include <iostream>

using namespace std;

double sin(double);
int main()
{

	return 0;
}

double sin(double x)
{
	double value = x;
	double e = x;
	int i = 1;
	while(e/i > 1e-10)
	{
		if(i