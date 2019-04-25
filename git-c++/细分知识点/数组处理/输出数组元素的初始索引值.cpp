#include <iostream>

using namespace std;

#define i 10

int main()
{
	int newArr[i];
	for(int m = 0; m < i ; m++)
	{
		cin>>newArr[m];
	}

	int copyArr[i];
	for(int n = 0; n < i ; n++)
	{
		copyArr[n] = newArr[n];
	}

	for(int x = 0; x < i ; x++)
	{
		for(int j = x + 1; j < i ; j++)
		{
			if(copyArr[x]<copyArr[j])
			{
				int temp ;
				temp = copyArr[x];
				copyArr[x] = copyArr[j];
				copyArr[j] = temp;
			}
		}
	}

	int maxIndex, minIndex;
	for(int y = 0; y < i ; y++)
	{
		if(copyArr[0] == newArr[y])
			maxIndex = y;
		else if(copyArr[i-1] == newArr[y])
			minIndex = y;
	}
	cout<<"maxIndex = "<<maxIndex<<endl;
	cout<<"minIndex = "<<minIndex<<endl;

	return 0;
}




