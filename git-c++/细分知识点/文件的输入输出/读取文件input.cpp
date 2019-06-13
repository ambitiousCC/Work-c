#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream input("F:\\files\\work-c\\细分知识点\\文件的输入输出\\test.txt");

	if(input.fail())//确定是否存在文件，健壮！！
	{
		cout<<"File doesn't exist"<<endl;
		cout<<"Exit program"<<endl;
		return 0;
	}

	string firstName;
	char mi;
	string content;
	while(input>>content)//读取全部
	{
		cout<<content<<" ";
	}

	input.close();
	cout<<"Done"<<endl;
	return 0;
}