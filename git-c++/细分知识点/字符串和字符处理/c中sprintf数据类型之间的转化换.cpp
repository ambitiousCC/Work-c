#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    char str[256] = { 0 };
    int data = 1024;
    //将data转换为字符串
    sprintf(str,"%d",data);
    //获取data的十六进制
    sprintf(str,"0x%X",data);
    //获取data的八进制
    sprintf(str,"0%o",data);
    const char *s1 = "Hello";
    const char *s2 = "World";
    //连接字符串s1和s2
    sprintf(str,"%s %s",s1,s2);*/
    cout<<str<<endl; 
    return 0;
} 