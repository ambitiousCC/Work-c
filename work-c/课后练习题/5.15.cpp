#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 1;
	while(pow(n,3)<=12000)
	{
		n++;
	}

	n--;
	cout<<n<<endl;

	return 0;
}