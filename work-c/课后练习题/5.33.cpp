#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	double x, y, z;
	cin>>x>>y>>z;

	y = y/1200;

	cout<<"Month CD Value"<<endl;
	for(int i = 0; i < z; i++) {
		cout<<left;
		cout<<setw(6)<<i+1;

		x += x*y;
		cout<<x<<endl;
	}

	return 0;
}
