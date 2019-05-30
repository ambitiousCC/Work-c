#include <iostream>

using namespace std;

int main()
{
	int line;
	cin>>line;
	for(int i = 0; i < line; i++)
	{
		for(int j = 1; j < 2*(line - i); j++)
		{
			cout<<ends;
		}

		for(int k = i + 1; k > 0; k--)
		{
			cout<<k<<ends;
		}
		for(int l = 2; l < i + 2; l++)
		{
			cout<<l<<ends;
		}
		cout<<endl;
	}

	return 0;
}


