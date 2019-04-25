#include <iostream>

using namespace std;

double pow(double, int);
int main()
{
	double num;
	int n;
	cin>>num>>n;

	cout<<pow(num,n)<<endl;

	return 0;
}

double pow(double num, int n)
{
	double val = 1.0;
	while(n--)
		val *= num;
	return val;
}



