#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	cin>>num;
	
	int sum = 0;
	int max = num;//可以将最大值一开始就设立
	int count = 0;//一定要初始化以后才能投入计算中
	while(-999!=num)
	{
		sum = num + sum;
		if(max<num)
			max = num;
		count++;
		cin>>num;
	}

	cout<<sum<<endl;
	cout<<fixed<<setprecision(2)<<(float)sum/count<<endl;

	return 0;
}

