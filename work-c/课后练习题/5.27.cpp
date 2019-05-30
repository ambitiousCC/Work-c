#include <iostream>
#include <cmath>

using namespace std;

void count(int);
int main()
{

	for(int m = 10000; m <= 100000; m += 10000)
		count(m);

	return 0;

}


void count(int i)
{
	double PI;
	for(int j = 0; j < i; j++)
	{
		PI += 4 * pow(-1,j+1)/(float)(2*i-1);
	}

	cout<<PI<<endl;
}
