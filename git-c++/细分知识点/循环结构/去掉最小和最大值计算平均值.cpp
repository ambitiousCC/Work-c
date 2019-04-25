#include <iostream>

using namespace std;

int main()
{
	int s, sum=0;
	int i;
	int max = 0,
		min = 10;
	for(i = 0; i < 10; i++)
	{
		cin>>s;//输入立刻比较
		if(s>max)
			max = s;
		if(s<min)
			min = s;
		sum += s;
	}
	sum = sum - max - min;
	cout<<(float)sum/8<<endl;
	return 0;
}
