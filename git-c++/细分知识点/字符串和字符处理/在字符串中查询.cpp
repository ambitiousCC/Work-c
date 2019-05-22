#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(){
    //c============================================
    char *s = "0123456789012345678901234567890";
    char *p,*q;
    unsigned char tmp;
    p = strchr(s, '5');
    printf("原来的字符串:%s\n", s);
    printf("5之后的字符串:%s\n", p);

	//c++=========================================
	string str = "abcdeddcbc";
    int idx = str.find("cf");
    if(idx==string::npos)//没有找到
        cout<<"don't have"<<endl;
	else
		cout<<idx<<endl;

	//在字符串中查找,并且返回索引值
	int index;
	index = str.rfind("b");
	//为了提高效率，可以引入具体的范围：rfind(str,str_befound,range_int)
	//同时，如果没有：从最后往前找:不能返回所有
	cout<<index<<endl;
	//add function
	//first
	int index2;
	index2 = str.find_first_of("b");
	cout<<index2<<endl;
	//last
	int index3;
	index3 = str.find_last_of("cb");//返回到是b所在索引值
	cout<<index3<<endl;

    return 0;
}
