#include <iostream>

using namespace std;

int strlen(int *a);
int main()
{
	string a;
	cin>>a;

	cout<<strlen(*a);

	return 0;
}

int strlen(char *a)
{
	int n = 0;
	while(*a!='\0')
	{
		n++;
		a++;
	}
	return n;
}