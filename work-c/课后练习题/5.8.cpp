#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout<<left;
	cout<<setw(10)<<"Number"<<setw(10)<<"SquareRoot"<<endl;
	
	for(int i = 0; i <= 20; i+=2)
	{
		cout<<setw(10)<<i<<setw(10)<<sqrt(i)<<endl;
	}

	return 0;
}