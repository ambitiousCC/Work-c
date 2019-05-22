#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
template <typename T>

T length(T a[])
{
	return sizeof(a)/sizeof(T);
}
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
	cout<<length(a)<<endl;

	return 0;
}


