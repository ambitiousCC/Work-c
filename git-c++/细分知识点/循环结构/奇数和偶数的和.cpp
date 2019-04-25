#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;

	int a = 0,
		b = 0;
	while(num)
	{
		if(num%2 == 0)
			a++;
		else
			b++;
		cin>>num;
	}
	cout<<a<<" "<<b;
	
	return 0;
}