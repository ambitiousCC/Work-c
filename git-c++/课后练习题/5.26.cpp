#include <iostream>

using namespace std;

int main()
{
	double sum = 0;
	for(int i = 1; i <= 97; i+=2)
	{
		sum += (float)i / (i+2);
	}

	cout<<sum<<endl;

	double sum2 = 0;
	for(int j = 97; j >= 1; j-=2)
	{
		sum2 += (float)j / (j+2);
	}

	cout<<sum2<<endl;

	return 0;
}