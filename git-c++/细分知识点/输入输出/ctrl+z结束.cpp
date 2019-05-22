#include <iostream>

using namespace std;

int main()
{
	char c;
	while(cin.get(c))//也就是对cin流的介绍撒
	{
		cout<<c<<endl;
	}
	cout<<"end"<<endl;
	char a, b;
	a = cin.get();
	cin.get(b);
	cout<<a<<b<<endl;

	system("pause");

	return 0;
}