#include <iostream>

using namespace std;
#define N 10

int main()
{
	int numbers[N];
	for(int i = 0; i<N; i++)
	{
		cin>>numbers[i];
	}

	//不能直接使用赋值让两个数组相等，只能一一赋值

	int newArray[N];
	for(int a = 0; a < N; a++)
	{
		newArray[a] = numbers[a];
	}

	for(int m = 0; m < N; m++)
	{
		for(int n = m + 1; n < N ; n++)
		{
			if(newArray[m]<newArray[n])
			{
				int temp;
				temp = newArray[m];
				newArray[m] = newArray[n];
				newArray[n] = temp;
			}
		}//从大到小排序
	}

	cout<<"max = " << newArray[0]<<endl;
	cout<<"min = " << newArray[N-1]<<endl;

	return 0;
}
