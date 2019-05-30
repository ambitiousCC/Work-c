#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//先打印十行简化:使用数组形式，但是没有相对的视觉效果：使用了0填充空白，而且现实的不是正三角
	int a[10][10] = {0};
	for(int i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for(int j = 1; j < 10; j++)
	{
		for(int k = 1; k < j; k++)
		{
			a[j][k] = a[j-1][k-1] + a[j-1][k];
		}
	}
	for(int l = 0; l < 10; l++)
	{
		for(int n = 0; n < 10; n++)
			cout<<setw(4)<<a[l][n];
		cout<<endl;
	}

	return 0;
}

