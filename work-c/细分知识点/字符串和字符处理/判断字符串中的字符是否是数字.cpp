#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a = "1234";

	for(int i = 0; i < a.length(); i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			cout<<a[i]<<endl;
	}

	return 0;
}