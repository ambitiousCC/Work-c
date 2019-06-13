#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void takeNum(string);

int main()
{
	string ss;

	while(cin>>ss)
	{
		takeNum(ss);	
		if(cin.get()=='\n')
			break;
	}
	
	return 0;
}

void takeNum(string ss)
{
	char l = '-';

	int i;
	vector<string> v;
	for(i=0;i<ss.length();i++)
	{
		string temp = "";
		if(ss[i]==l)
		{
			i++;
			if(isdigit(ss[i]))
			{
				temp += l;
				while(isdigit(ss[i]))
				{
					temp += ss[i];
					i++;
				}
				v.push_back(temp);
				i--;//逻辑错误：导致成功连续的下一个无法判断
			}
		}
		else if(isdigit(ss[i]))
		{
			while(isdigit(ss[i]))
			{
				temp += ss[i];
				i++;
			}
			v.push_back(temp);
			i--;
		}
	}
	for(vector<string>::iterator it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
}