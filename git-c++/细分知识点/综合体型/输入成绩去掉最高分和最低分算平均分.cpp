#include <iostream>

using namespace std;

int main()
{
	int nums[10];
	for(int i = 0; i < 10; i++)
	{
		cin>>nums[i];
	}

	for(int k = 0; k < 10; k++)
	{
		for(int j = k+1; j < 10; j++)
		{
			if(nums[k]<nums[j])
			{
				int temp;
				temp = nums[k];//易错点：不能搞反顺序
				nums[k] = nums[j];
				nums[j] = temp;
			}
		}
	}

	int sum = 0;
	for(int l = 1; l < 9; l++)
	{
		sum += nums[l];
	}
	cout<<sum<<endl;

	double average = (float)sum/8;

	cout<<average<<endl;

	return 0;
}