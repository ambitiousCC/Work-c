#include <iostream>

using namespace std;

int main()
{
	for(int i = '!', j = 1; i <= '~'; i++,j++)
	{
		cout<<static_cast<char>(i)<<" ";
		if(j%10 == 0)
			cout<<endl;
	}

	cout<<endl;

	return 0;
}