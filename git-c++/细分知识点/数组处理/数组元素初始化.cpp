#include <iostream>
#include <string>

using namespace std;

int main()
{
	//一位数组
	//全部
	static int a[4] = {1,2,3,4};
	//部分
	static int b[4] = {1,2};

	static int c[] = {1,2,3,4};

	//二维
	static int d[3][4] = {{1,2,3},{2,6},{4,5}};

	for(int i = 0; i < sizeof(b)/sizeof(int); i++)
		cout<<b[i]<<" ";
	cout<<endl;
	for(int j = 0; j < sizeof(c)/sizeof(int); j++)
		cout<<c[j]<<" ";
	cout<<endl;

	return 0;
}