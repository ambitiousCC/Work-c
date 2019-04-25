#include <iostream>

using namespace std;

void print(int n);
int main()
{
	int num;
	cin>>num;
	
	print(num);
	return 0;
}

void print(int n)
{
	int s = n % 10;//获取个位数
	while(n = n/10)
	{
		cout<<s<<endl;
		s = n % 10;
	}
	cout<<s<<endl;//输出最后的首位
}

		