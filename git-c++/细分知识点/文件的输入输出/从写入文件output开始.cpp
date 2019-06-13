#include <iostream>
#include <fstream>//
using namespace std;
int main()
{
	ofstream output;
	//注意路径中的反义字符！！！
	output.open("E:\\files\\work-c\\细分知识点\\文件的输入输出\\test.txt");

	output<<"Derek is more better!!"<<endl;
	output<<"give me your hand"<<endl;

	//保存
	output.close();
	cout<<"Done"<<endl;

	return 0;
}
	