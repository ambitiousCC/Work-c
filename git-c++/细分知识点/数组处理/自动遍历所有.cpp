#include <iostream>

using namespace std;
int main()
{
	int a[3] = {1,2,3};

	/*
	int *p;
	for(p = a; p < a + sizeof(a)/sizeof(int); ++p)
    {
        *p += 2;
        cout<<*p<<endl;
    }


*/
	for(int &e : a)
	{
		e += 2;
		cout<<e<<endl;
	}

	return 0;
}
