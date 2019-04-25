#include <iostream>

using namespace std;

#define i 5

int main()
{
	int a = 0,
		b = 0,
		c = 0;
	
	int num;
	cin>>num;
	for(int j = 0; j < i ; j++)
	{
		if(num>0)
			a++;
		else if(num<0)
			b++;
		else
			c++;
		cin>>num;
	}

	cout<<a<<" "<<b<<" "<<c;
	return 0;
}