#include <iostream>
using namespace std;
int main()
{
	int a[100],
		b[100];
	int i = 0;
	cin>>a[i];
	while(a[i]!=-1)
	{
		i++;
		cin>>a[i];
	}
	int i1 = 0;
	cin>>b[i1];
	while(b[i1]!=-1)
	{
		i1++;
		cin>>b[i1];
	}
	
	int aLen = i,
		bLen = i1;
	int k = 0;
	int newArr[100];
	for(int j = 0; j < aLen; j++)
	{
		bool jd = true;
		for(int j1 = 0; j1 < bLen; j1++)
		{
			if(a[j]==b[j1])
				jd = false;
		}

		if(jd)
		{
			newArr[k] = a[j];
			k++;
		}
	}
	
	for(int l = 0; l < k; l++)
		cout<<newArr[l]<<" ";

	return 0;
}
