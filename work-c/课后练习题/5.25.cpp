#include <iostream>

using namespace std;

int main()
{
	double m = 0;
	for(int i = 50000; i>=1 ; i--)
	{
		m += 1 / (float)i;
	}

	cout<<m<<endl;

	return 0;

}