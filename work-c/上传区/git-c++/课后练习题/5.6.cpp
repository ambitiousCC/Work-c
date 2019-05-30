#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout<<setw(10)<<"Degree"<<setw(10)<<"Sin"<<setw(10)<<"Cos"<<endl;

	for(int i = 0; i <= 360; i+=10)
	{
		cout<<setw(10)<<i<<setw(10)<<sin(i)<<setw(10)<<cos(i)<<endl;
	}

	return 0;
}