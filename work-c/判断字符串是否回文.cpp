#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	cin>>a;
	
	bool b = true;
	for(int i = 0; i < a.length(); i++)
	{
		if(a[i]!=a[a.length()-1-i])
			b = false;
	}

	if(b)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;

	return 0;
}