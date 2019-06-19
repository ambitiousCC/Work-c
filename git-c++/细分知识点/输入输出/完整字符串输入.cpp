#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c[100];
	cin.getline(c,100,'\n');

	int i=0,len=0;
	while(c[i]!='\0')
	{
		len++;
		i++;
	}

	string ss = "";
	for(i =0;i<len;i++)
	{
		ss+=c[i];
	}

	cout<<ss<<endl;

	return 0;
}