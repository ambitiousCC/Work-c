#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	cout<<left;
	cout<<setw(10)<<"kilogrames"<<setw(10)<<"Pounds"<<endl;

	for(int i = 1; i < 200; i+=2)
	{
		cout<<setw(10)<<i<<setw(10)<<2.2 * i<<endl;
	}

	return 0;
}
