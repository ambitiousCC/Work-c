#include <string>
#include <cstdio>

int main()
{
	char a[] = "adsf";

	printf("length=%d\n", strlen(a));//没有包含\0
	//输出4

	printf("length2=%d\n", sizeof(a));//因为包含了句子末尾的结束符号\0
	//输出5
}