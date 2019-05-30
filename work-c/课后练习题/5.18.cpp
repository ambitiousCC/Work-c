#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	int n;
	int num = 0;
	int a[100];

	cin>>n;

	for(int i = 2; i*i < n; i++)
	{
		while(n%i == 0)
		{
			a[num++] = i;
			n /= i;
		}
	}

	if(n>1)
		a[num++] = n;

	for(int j = 0; j < num; j++)
		cout<<a[j]<<" ";

	return 0;
}