#include <iostream>

using namespace std;

int main()
{
	double n;
	cin>>n;

	int a = 0,
		b = 0;
	while(n!=0)
	{
		if(n>0)
			a++;
		else
			b++;

		cin>>n;
	}

	cout<<"正数: "<<a<<ends<<"负数: "<<b<<endl;

	return 0;
}