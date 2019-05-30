#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin>>m;
	int a[m];
	for(int i = 0; i < m; i++)
		cin>>a[i];
	cin>>n;
	int b[n];
	for(int j = 0; j < n; j++)
		cin>>b[j];

	int c[100];
	int count = 0;
	for(int k = 0; k < m; k++)
	{
	bool j = true;
		for(int l = 0; l < n; l++)
		{
			if(a[k] == b[l])
				j = false;
		}
		if(j)
		{
			c[count] = a[k];
			count++;
		}
	}

	int len = count+n;
	for(int x = count, y = 0; x < len; x++, y++)
	{
		c[x] = b[y];
	}

	/*===========================================*/

	for(int a1 = 0; a1 < len; a1++)
	{
		for(int b1 = a1+1; b1 < len; b1++)
		{
			if(c[a1] < c[b1])
			{
				int temp = c[a1];
				c[a1] = c[b1];
				c[b1] = temp;
			}
		}
	}

	for(int z = 0; z < len; z++)
		cout<<c[z]<<" ";

	return 0;
}

