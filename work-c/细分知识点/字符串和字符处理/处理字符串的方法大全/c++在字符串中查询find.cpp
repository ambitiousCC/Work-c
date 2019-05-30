#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	string str = "abcdeddcbc";
	string need = "a";
    cout<<str<<" find "<<need<<endl;
    if(str.find(need)!=string::npos)//找到
		cout<<"index: "<<str.find(need)<<endl;
	else
        cout<<"don't have"<<endl;

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
