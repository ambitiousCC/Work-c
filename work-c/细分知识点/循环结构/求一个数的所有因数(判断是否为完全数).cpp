#include <iostream>

using namespace std;
int judge(int k);

int main()
{
	for(int i = 2; i <= 1000; i++)
	{
		if(judge(i))
			cout<<i<<" ";
	}

	return 0;
}

int judge(int k)
{
	int s = 0;
	for(int j = 1; j <= k/2 ; j++)//实际上从2开始算，而1也是因数
	{
		if(k%j == 0)//主思想：从1到数的一半枚举出值判断
			s= s + j;
	}
	if(s==k)
		return 1;
	else
		return 0;
}