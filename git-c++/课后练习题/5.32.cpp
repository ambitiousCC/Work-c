#include <iostream>

using namespace std;

int main() {
	double x,y;
	cin>>x>>y;

	int month;
	cin>>month;

	double x2 = x;

	y = 1 + y/12;
	x = x * y;
	for(int i = 1; i < month; i++) {
		x = (x + x2) * y;
	}

	cout<<x<<endl;

	return 0;
}

