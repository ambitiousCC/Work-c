#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ss;
	while(cin>>ss)
	{
		cout<<ss<<endl;
		if(cin.get()=='\n')//Ê¹ÓÃcin.get()ÅÐ¶ÏÊäÈë×Ö·û
			break;
	}

	return 0;
}