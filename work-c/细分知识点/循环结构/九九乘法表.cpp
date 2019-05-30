#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for(int i = 1; i < 10; i++)
	{
		for(int j = 1; j <= i;j++)
		{
			cout<<j<<"*"<<i<<setw(2)<<"="<<i*j<<" ";
		}
		cout<<endl;//只要考虑输出顺序就可以打印出想要的图形
	}

	return 0;
}