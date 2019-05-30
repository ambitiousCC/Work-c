#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592
int main()
{
	double s;
	cin>>s;

	double area = 6 * s * s / 4 * tan(PI/6.0);

	cout<<area;

	return 0;
}