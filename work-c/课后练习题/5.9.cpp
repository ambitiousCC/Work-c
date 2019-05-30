#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int now = 10000;
	const double tax = 0.05;
	int end = now;
	for(int i = 1; i <= 10; i++)
	{
		end += end * tax;
	}

	cout<<end<<endl;

	return 0;
}