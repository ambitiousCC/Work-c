#include <bits/stdc++.h>

using namespace std;

int main()
{
	string input;
	cin>>input;

	vector<int> num;

	char* s_input = (char*)input.c_str();

	const char* split = ",";
	char* p = strtok(s_input, split);

	int n;
	while(p!=NULL)
	{
		sscanf(p,"%d",&n);
		num.push_back(n);
		p = strtok(NULL, split);
	}

	for(int i = 0; i < num.size(); i++)
	{
		for(int j = i+1; j < num.size(); j++)
		{
			if(num[i]%2==0&&num[j]%2!=0)
			{
				int temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}

	int begin = 0;
	for(int k = 0; k < num.size(); k++)
	{
		if(num[k]%2==0)
		{
			begin = k;
			break;
		}
	}

	for(int l = begin; l < num.size(); l++)
	{
		for(int m = l+1; m < num.size(); m++)
		{
			if(num[l]>num[m])
			{
				int temp2 = num[l];
				num[l] = num[m];
				num[m] = temp2;
			}
		}
	}

	vector<int>::iterator it;
	for(it=num.begin();it!=num.end();it++)
	{
		if(it!=num.end()-1)
			cout<<*it<<",";
		else
			cout<<*it;
	}

	return 0;
}
