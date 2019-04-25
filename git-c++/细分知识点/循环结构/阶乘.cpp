#include <iostream>

using namespace std;

int sum(int i);

int main()
{
	int num = 0;
	int sums = 0;
	for(int i = 0; i < 3; i++)
	{
		sums = sums + sum(i+1);
	}
	cout<<sums<<endl;
}

int sum(int i)
{
	int s = 1;
	for(int j = 1; j <= i ; j++)
	{
		s *= j;
	}
	return s;
}
