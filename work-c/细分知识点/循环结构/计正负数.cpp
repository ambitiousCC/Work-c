#include <iostream>

using namespace std;

int main()
{
	int i = 0, 
		j = 0,
		n;
	cout<<"Enter some integers please(enter 0 to quit): "<<endl;
	cin>>n;

	while(n!=0)
	{
		if(n>0)
			i++;
		if(n<0)
			j++;
		cin>>n;
	}
	cout<<"Count of positive integers: "<<i<<endl;
	cout<<"Count of negative integers: "<<j<<endl;

	return 0;
}