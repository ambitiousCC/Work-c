#include <iostream>
#include <string>
#include <cctype>
#include <vector>sf51a6
using namespace std;
int judgeNum(char);
void print(vector<int> v);
int main()
{
	string ss;
	cin>>ss;
		
	vector<int> v;
	int i=0;
	int num;
	for(i;i<ss.length();i++)
	{
		if(isdigit(ss[i]))
		{
			num = judgeNum(ss[i]);
			v.push_back(num);
		}
	}

	print(v);
	cout<<endl;

	return 0;
}
int judgeNum(char ss)
{
	int num;
	switch(ss)
	{
	case '0':
		num = 0;
		break;
	case '1':
		num = 1;
		break;
	case '2':
		num = 2;
		break;
	case '3':
		num = 3;
		break;
	case '4':
		num = 4;
		break;
	case '5':
		num = 5;
		break;
	case '6':
		num = 6;
		break;
	case '7':
		num = 7;
		break;
	case '8':
		num = 8;
		break;
	case '9':
		num = 9;
		break;
	default:
		break;
	}

	return num;
}
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}