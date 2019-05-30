#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;

	int s = num % 10;
	while(num = num / 10)
	{
		s += num % 10;
	}
	cout<<s<<endl;

	return 0;
}