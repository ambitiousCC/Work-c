#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ss;
	while(cin>>ss)
	{
		//缺点是空格被当做分割符了
		cout<<ss<<endl;
		if(cin.get()=='\n')//使用cin.get()判断输入字符
			break;
	}

	return 0;
}