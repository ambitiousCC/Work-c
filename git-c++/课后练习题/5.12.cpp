#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> num;
	for(int i = 100; i <= 1000; i++)
	{
		if(i%5==0 && i%6==0)
			num.push_back(i);
	}

	for(int j = 0; j < num.size(); j++)
	{
		cout<<num[j]<<" ";
		if((j+1)%10==0)
			cout<<endl;
	}

	return 0;
}