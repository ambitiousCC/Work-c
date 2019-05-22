#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;

	//content
	int num[10];
    num[0] = n % 8;
	int count = 0;
	int i = 1;
	while(n>8)
	{
		//零的存在影响了位数的转化
		//所以需要用数组来取数
		n = n / 8;
		num[i] = n % 8;
		i++;
	}
	count = i;

	int m = 0;
	for(int j = 0; j < count ; j++)
		m += num[j] * pow(10, j);

	cout<<m<<endl;
	return 0;
}