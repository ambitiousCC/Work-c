#include <iostream>

using namespace std;

int main()
{
	double number[] = {1.55645,2.55};

	int len = sizeof(number)/sizeof(double);

	cout<<len<<endl;

	return 0;
}