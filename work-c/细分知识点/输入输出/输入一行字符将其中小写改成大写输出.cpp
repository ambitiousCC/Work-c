#include <iostream>

using namespace std;

int main()
{
	char a[100];
	cin.getline(a,100);

	int i = 0;
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i] = a[i] - 32;//记忆！转换大小写，小写—(-32)—>大写—(+32)—>小写
		else if(a[i]>='A'&&a[i]<='Z')
			a[i] = a[i] + 32;
		i++;
	}
	cout<<a<<endl;

	return 0;
}