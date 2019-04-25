#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int N = 100;
	int s = 0;
	for(int i = 1; i<=N; i++)
	{
		s = s + pow(i,2);
		cout<<i<<endl;
	}

	cout<<s;

	return 0;
}