#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define PI 3.141592
int main()
{
	double r;
	cin>>r;

	double s = 2 * r * sin(PI/5.0);

	double Area = 5 * s * s / 4 * tan(PI/5.0);

	cout<<fixed<<setprecision(2)<<Area;

	return 0;
}

		