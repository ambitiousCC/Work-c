#include <iostream>
using namespace std;
int goes(int);
int go(int,int);
int main()
{
	int n,m;
	cin>>n>>m;
	double N;
	if(m==0)
		N = 1;
	else
		N = go(n,m) / goes(m) * 1.0;

	cout<<N<<endl;
	return 0;
}
int go(int n, int m)
{
	int mul = 1;
	int times = m;
	while(m--)
	{
		mul *= n;
		n--;
	}
	return mul;
}
int goes(int n)
{
	int mul = 1;
	for(int i=n;i>0;i--)
	{
		mul *= i;
	}
	return mul;
}
//КЏЪ§жиди