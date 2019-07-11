#include <iostream>
#include <cmath>
using namespace std;
int goes(int);
int go(int,int);
int all(int,int);
int main()
{
    int N;
    cin>>N;

    int n,m,times=0;
#if 1
    for(int i=0;i<=N/2;i++)
    {
        n = N - i;
        m = i;
        times += all(n,m);
    }
#endif
    cout<<times<<endl;
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
int all(int n,int m)
{
	double N;
	if(m==0)
		N = 1;
	else
		N = go(n,m) / goes(m) * 1.0;
	return N;
}
