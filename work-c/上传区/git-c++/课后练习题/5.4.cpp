#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<left;
	cout<<setw(10)<<"Kilograms"<<setw(10)<<"Pounds"<<setw(10)<<"|"<<setw(10)<<"Pounds"<<setw(10)<<"Kilograms"<<endl;

	for(int i = 1; i <= 100; i++)
	{
		int a = 2 * i - 1;
		int b = (i + 3) * 5;//寻找共同的关系

		cout<<setw(10)<<a<<setw(10)<<a*2.2<<setw(10)<<"|"<<setw(10)<<b<<setw(10)<<b*0.4545<<endl;
	}
	
	return 0;
}