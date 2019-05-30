#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<left;
	cout<<setw(10)<<"Miles"<<setw(10)<<"Kilometers"<<endl;

	for(int i = 1; i <= 10; i++)
	{
		double a = i * 1.609;
		cout<<setw(10)<<i<<setw(10)<<a<<endl;
	}

	return 0;
}