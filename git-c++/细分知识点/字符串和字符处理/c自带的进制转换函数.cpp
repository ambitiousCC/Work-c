#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	//十进制转换成各位进制数字
	cout<<"输入十进制数: ";
	int n;
	cin>>n;
	char hex[100],bin[100],ox[100];
	//十六进制
	itoa(n,hex,16);
	//八进制
	itoa(n,ox,8);
	//二进制
	itoa(n,bin,2);

	//斯巴拉西
	cout<<"(十六)"<<hex<<" "<<"(八)"<<ox<<" "<<"(二)"<<bin<<endl;

	return 0;
}
