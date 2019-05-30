#include <iostream>

using namespace std;

int reverse(int a[], int len);

int main()
{
	int a[3] = {5,3,8};
	cout<<reverse(a, 3)<<endl;

	for(int i = 0; i<3; i++)
		cout<<a[i]<<endl;
	return 0;
}

int reverse(int a[], int len)
{
	int j = 0;
	for(int k = 0; k<len; k++)
		if(a[k]>a[j])
			k=j;
		return k;
}
