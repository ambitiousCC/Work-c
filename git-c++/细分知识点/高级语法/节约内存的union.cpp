#include <iostream>
using namespace std;
union test 
{
	int a;
	long b;
	double c;
};
//∂¿’º“ª∏Ò
int main()
{
	test a;
	a.b = 1.054;
	cout<<a.a<<endl;

	return 0;
}
