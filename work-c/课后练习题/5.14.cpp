#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 1;
	while(pow(n,2)<=12000)
	{
		n++;
	}

	cout<<n++<<endl;

	return 0;
}
