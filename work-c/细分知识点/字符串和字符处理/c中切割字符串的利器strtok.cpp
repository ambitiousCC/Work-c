#include <iostream>
#include <stdio.h>//c need
#include <string.h>//need

using namespace std;

int main()
{
	char buf[] = "s,dfa,sdf,ds";
	char *p;
	//first time you should point out string_name
	p = strtok(buf,",");

	while(p!=NULL)
	{
		printf("p=%s\n",buf);
		printf("s=%s\t",p);
		//then you don't need , and using NULL replace it
		p = strtok(NULL,",");
	}

	return 0;
}
//https://www.runoob.com/cprogramming/c-function-strchr.html
//https://blog.csdn.net/pengnanzheng/article/details/81120890
//https://www.runoob.com/cprogramming/c-function-sscanf.html