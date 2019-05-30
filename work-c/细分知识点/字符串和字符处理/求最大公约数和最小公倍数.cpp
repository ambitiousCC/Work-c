#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin>>m>>n;

	int k, temp, sub;
	if(n>m)
	{
		temp = n;
		n = m;
		m = temp;	
	}
	sub = n * m;
	while(n!=0)
	{
		k = m % n;//余数
		m = n;
		n = k;//余数成为被除数除数
	}
	cout<<m<<endl;//最大公约数
	cout<<sub/m<<endl;//最小公倍数数乘积除以最大公约数

	return 0;
}
