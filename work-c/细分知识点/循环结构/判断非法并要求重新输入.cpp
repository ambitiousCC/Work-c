#include <iostream>

using namespace std;

int main()
{
	//只能输入y 或者 n
	char y;
	cin>>y;

	while(y!='y'&&y!='n')//输入的既不是y也不是n，那么重新输入
	{
		cin>>y;
	}

	while(y=='y')
	{
		cout<<"ok"<<endl;

		cin>>y;
		while(y!='y'&&y!='n')
		{
			cin>>y;
		}
	}
}