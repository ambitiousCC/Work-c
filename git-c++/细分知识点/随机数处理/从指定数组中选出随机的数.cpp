#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int N,n;
	cin>>N>>n;

	int a[N], b[n];
	for(int i = 0; i < N; i++)
	{
		cin>>a[i];
	}

	srand(time(0));

	//产出n个0~N的随机数
	for(int j = 0; j < n; j++)
	{
		b[j] = rand() % N;
	}

	for(int k = 0; k < n; k++)
		cout<<a[b[k]]<<endl;

	return 0;
}
