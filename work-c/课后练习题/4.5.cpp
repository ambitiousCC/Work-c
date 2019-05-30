#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592
int main()
{
	int n;
	cin>>n;
	double s;
	cin>>s;

	double area = 6 * s * s / 4 * tan(PI/n);

	cout<<area;

	return 0;
}