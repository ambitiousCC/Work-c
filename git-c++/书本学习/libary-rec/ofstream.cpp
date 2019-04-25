#include <iostream>
#include <fstream>

using namespace std;

/**
 *  文件处理
 *  ofstream output;
 *  output.open(filename.type);
 *  output<<content;//out
 *  output.close();//

 *  fstream input:
 *  input.open(filename.type);
 *  input>>variable;
 *  cout<<content;
 *  input.close();
 *
 */

int main()
{
    //写入
    ofstream output;
    output.open("cuiqin2.txt");
    output<<"cuiqinbaba";
    output.close();
    cout<<"Done"<<endl;

    //读取
    ifstream input;
    input.open("cuiqin2.txt");
    string a;
    input>>a;
    cout<<"The content of the file is: "<<a<<endl;
    input.close();
    cout<<"Done"<<endl;
    return 0;
}
