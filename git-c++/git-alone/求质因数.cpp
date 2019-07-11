#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int x)
{   //这里是判断 x 是否为质数 
	if(x<2||x&1==0)
		return 0;
	for(int i=2;i<=sqrt(x);i+=(i&1)+1)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(isprime(n))
	{
		printf("%d=%d\n",n,n);
		return 0;
	}  //如果 n 自身就是质数，就直接输出结束程序 
	else
	{
		printf("%d: ",n);
		for(int i=2;i<=n;i++) 
			if(isprime(i))
			{
			while(n%i==0)
			{
				if(isprime(n)||n==1)
				{
					printf("%d ",i);
					break;
				}
				else 
				{
					printf("%d ",i);
					n/=i;
				}
			}
		}
	}
	return 0;
}
