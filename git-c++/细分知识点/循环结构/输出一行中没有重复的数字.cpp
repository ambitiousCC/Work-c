#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	vector<int> v;
	for(i=0;i<n;i++)
	{
		bool el = true;
		for(int j=0;j<n;j++)
		{
			if(j==i)
				continue;
			else
			{
				if(a[i]==a[j])
					el = false;
			}
		}
		if(el)
			v.push_back(a[i]);
	}
	

	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;

	delete[] a;

	return 0;
	
}
				