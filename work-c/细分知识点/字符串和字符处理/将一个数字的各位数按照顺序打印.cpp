#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;

	int n = num;
	int count = 1;
	while(n = n / 10)
	{
		count++;
	}

	cout<<count<<endl;//输出数字的位数

	int nums[count];//vs不兼容这种输入数组长度然后定义数组的模式
	nums[0] = num % 10;
	for(int i = 1 ; i <= count; i++)
	{
		num /= 10;
		nums[i] = num % 10;
	}
	for(int j = 0 ; j < i ; j++)
	{
		cout<<nums[j]<<" "<<endl;
	}

	return 0;
}
		