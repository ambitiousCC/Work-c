#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	cin>>x1>>y1;
	cin>>x2>>y2;

	const double r = 6378.1;
	
	double m = sin(x1)*sin(x2)+cos(x1)*cos(x2)+cos(x1)*cos(x2)*cos(y1-y2);
	double d = r * acos(m);

	cout<<d<<"km";

	return 0;
}
