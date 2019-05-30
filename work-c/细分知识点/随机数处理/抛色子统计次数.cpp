#include <iostream>
#include <ctime>//时间的头文件
#include <cstdlib>//随机数的头文件

using namespace std;

int main()
{
	int a[7] = {0};

	srand(time(0));

	for(int i = 1; i <= 10000; i++)
		a[rand()%6 +1]++;
	for(int j = 1; j <= 6; j++)
		cout<<j<<": "<<a[j]<<endl;

	return 0;

}


