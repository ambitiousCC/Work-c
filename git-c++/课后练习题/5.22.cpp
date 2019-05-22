#include <iostream>

using namespace std;

bool judge(int);
int main()
{
	int count = 0;
	for(int i = 2; i <= 1000; i++)
	{
		bool k = judge(i);
		if(k)
		{
			count++;
			if(count%8==0)
				cout<<i<<endl;
			else
				cout<<i<<" ";
        }
	}

	return 0;
}

bool judge(int j)
{
    bool m = true;
	for(int k = 2; k < j; k++)
	{
		if(j % k == 0)
			m = false;
	}

	return m;
}

