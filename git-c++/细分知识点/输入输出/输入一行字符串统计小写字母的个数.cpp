#include <iostream>

using namespace std;

int main()
{
	char s[100];//定义一个长数组
	cin.getline(s,20);//：将指定长度的字符输入的存到数组中去，最后一位默认为\0结束
	int i = 0,
		count = 0;
	while(s[i]!='\0')//判断是否结束
	{
		if(s[i]>='a'&& s[i] <= 'z')
			count++;
		i++;
	}
	cout<<count<<endl;

	return 0;
}