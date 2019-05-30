#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	//content
	int m = 0;
	while(n!=0)
	{
		m += n % 8 * 10;
		n /= 8;
	}

	cout<<m<<endl;

	return 0;
}