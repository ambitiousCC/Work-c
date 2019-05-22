#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main() {
	string s1 = "sdafas";
	string s2 = "cuiqin";

	//erase(index_int,len_int)删除
	s1.erase(2,3);
	cout<<s1<<endl;
	//sds
	//等同于cout<<s1.erase(2,3)<<endl;

	//insert(index_int,str_string)插入
	s1.insert(0,s2);
	cout<<s1<<endl;
	//cuiqinsds
	//append(str_string)尾部插入
	s1.append("baba");
	cout<<s1<<endl;
	//push_back(char)尾部插入一个字符:vc不支持，G++支持
	//s1.push_back('f');
	//cout<<s1<<endl;
	
	//replace(index_int,len_int,str)替换
	s1.replace(0,6,"cuixiaoqin");
	cout<<s1<<endl;

	//substr(index_int,len_int)输出指定位置字符
	//注意这里需要声明新的变量储存得到的字符
	cout<<s1.substr(0,5)<<endl;

	//swap()使用第二个字符串代替第一个字符串

	s1.swap(s2);
	cout<<s1<<endl;

	return 0;
}

