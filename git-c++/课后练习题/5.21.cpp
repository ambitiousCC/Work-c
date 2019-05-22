#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	for(int l = 0; l < 8; l++)
	{
		for(int i = 0; i < 7-l; i++)
			cout<<setw(3)<<" ";
		for(int k = 0; k <= l; k++)
			cout<<setw(3)<<pow(2,k);
		for(int j = l-1; j >= 0; j--)
			cout<<setw(3)<<pow(2,j);
		cout<<endl;
	}

	return 0;
}
