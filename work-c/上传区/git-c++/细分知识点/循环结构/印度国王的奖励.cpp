#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//	int s = 0;
//	long t;
//	for(int i = 0; i <= 63; i++)
//	{
//		t = pow(2,(i+1));
//		cout<<t<<endl;//由于内存爆满，最后输出的是零
//	}
	double t = 1,
		   s = 0;
	for(int i = 0; i < 63; i++)
	{
		s = s + t;
		t = 2 * t;
	}
	cout<<s/1.4e8<<endl;

	return 0;
}

		