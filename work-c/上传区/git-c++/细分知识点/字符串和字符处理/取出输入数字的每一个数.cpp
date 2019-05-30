#include <iostream>

using namespace std;
const int N = 10;
int main()
{
	int a;
	int b[N];
	cin>>a;

	int i = 1;
	//由于不知道输入数字的具体长度
	b[0] = a % 10;
	while(a=a/10)//由于进入第一次循环时已经进行了操作所以只能在循环外面获取个位
	{
		b[i] = a % 10;
		i++;
	}

	for(int j = 0; j < N ; j++)
	{
		cout<<b[j]<<" ";
	}

	return 0;
}