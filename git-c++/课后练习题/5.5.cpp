#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<setw(10)<<"Miles"<<setw(10)<<"Kilometers"<<setw(10)<<"|"<<setw(10)<<"Kilometers"<<setw(10)<<"MIles"<<endl;

	for(int i = 1; i <= 10; i++)
	{
		int j = (i + 3) * 5;
		cout<<setw(10)<<i<<setw(10)<<i*1.609<<setw(10)<<"|"<<setw(10)<<j<<setw(10)<<j*0.6215<<endl;
	}

	return 0;
}