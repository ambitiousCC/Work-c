#include <iostream>

using namespace std;

bool judge(int);
int main()
{
	for(int i = 1; i <= 1000; i++)
	{
		if(judge(i))
			cout<<i<<endl;
	}

	return 0;
}

bool judge(int N)
{
	bool a = true;
	for(int j = 2; j < N; j++)
	{
		if(N%j == 0)
		{
			a = false;
		}
	}
	return a;
}
