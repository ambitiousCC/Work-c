#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string filename;
	cout<<"tell the file's name: ";
	cin>>filename;

	//使用了c中的切割字符的做法
	ifstream input(filename.c_str());

	if(input.fail())
		cout<<"don't exist"<<endl;
	else
		cout<<"exist"<<endl;

	return 0;
}
