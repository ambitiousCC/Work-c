#include <cstring>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;

	if(a.length() < b.length())
	{
		cout<<"no";
	}
	else
	{
		char a1[100],b1[100];
		strcpy(a1, a.c_str());
		strcpy(b1, b.c_str());
		
		int i = 0,
			count2 = 0;
		int count = 0;
		while(a1[i]!='\0')
		{
			int j = 0;
			while(b1[j]!='\0')
			{
				if(a1[i]==b1[j])
					count++;
				j++;
			}
			count2 = j;
			i++;
		}

		if(count >= count2)
			cout<<"yes";
	}

	return 0;
}

