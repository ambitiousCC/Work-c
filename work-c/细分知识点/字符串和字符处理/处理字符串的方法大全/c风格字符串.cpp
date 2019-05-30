#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	//出现的问题：字符串的溢出问题:即便是超过了长度也是被分配到了随机内存中
	char str1[11] = "Hello ";
    char str2[11] = "World";
    char str3[11];
    int  len ;
	//strcpy 复制字符串
	strcpy( str3, str1); //复制莫得'\0'
	//memcpy(str3, str1);//有
	cout<<str3<<endl;

	//strcat 连接字符串
    strcat( str1, str2);
	cout<<str1<<endl;

	//strlen 返回字符串长度
	len = strlen(str1);
	cout<<len<<endl;

	//strcmp 判断字符串
	char str4[11] = "Hello";
    char str5[11] = "World";
	cout<<strcmp(str3,str4)<<endl;//str1>str2:-1,str=str2:0,(str1<str2||str1!=str2):1

	//strchr 返回指针指出第一次出现查询的位置
	char* p = strchr(str4,'l');//指针存储，指向的是后面的字符
	cout<<p<<endl;

	//strstr 上面的扩展，只不过是查询字符串
	char str6[] = "or";
	char *q = strstr(str5,str6);
	cout<<q<<endl;
	
	return 0;
}