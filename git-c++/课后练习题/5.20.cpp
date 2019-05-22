#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout<<left;
	cout<<setw(10)<<"Pattern A"
		<<setw(10)<<"Pattern B"
		<<setw(10)<<"Pattern C"
		<<setw(10)<<"Pattern D"<<endl;

	for(int i = 1; i <= 6; i++)
	{
		for(int j = 1; j <= i; j++)
			cout<<j;
		for(int j1 = 1; j1 <= 10-i; j1++)
			cout<<" ";
		for(int k = 1; k <= 7-i; k++)
			cout<<k;
		for(int k1 = 1; k1 <= i+3; k1++)
			cout<<" ";
		for(int l = i; l >= 1; l--)
			cout<<l;
		for(int l1 = 1; l1 <= 10-i; l1++)
			cout<<" ";
		for(int m = 1; m <= 7-i; m++)
			cout<<m;
		for(int m1 = 1; m1 <= i+3; m1++)
			cout<<" ";
		cout<<endl;
	}

	return 0;
}