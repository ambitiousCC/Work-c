#include <iostream>

using namespace std;

int main()
{
	int f[20] = {1,1};
	for(int i = 2; i < 20; i++)
	{
		f[i] = f[i-2] + f[i-1];
	}
	for(int j = 0; j < 20; j++)
	{
		if(i % 5 == 0)
			cout<<endl;
		cout.width(12);
		cout<<f[i];
	}

	return 0;

}