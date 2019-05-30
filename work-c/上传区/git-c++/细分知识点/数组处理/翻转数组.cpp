#include <iostream>

using namespace std;

void swap(int &, int &);
int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for(int j = 0; j < n/2; j++)
	{
		swap(a[j],a[n-j-1]);
	}

	for(int k = 0; k < n ; k++)
		cout<<swap[k]<<endl;

	return 0;
}

void swap(int &n, int &m)
{
	int temp;
	temp = n;
	n = m;
	m = temp;
}
