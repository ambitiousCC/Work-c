#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;

	if(num)//输入的是零就会判断为false
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}

	switch(num)
	{
	case 1://可以是很复杂的结构体
		cout<<"Enter 3 numbers: ";
		int n[3];
		for(int i = 0; i < 3 ; i++)
			cin>>n[i];
		for(int j = 0; j < 3 ; j++)
			cout<<n[j]<<" ";
		cout<<endl;
		break;
	}

	cout<<"Finshed!";

	return 0;
}
