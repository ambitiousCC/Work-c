#include <iostream>
#include <string>

using namespace std;

/**
 *  length()    返回字符串的长度
 *  size()      和length() 一毛一样
 *  at(index)   返回这个字符串在索引值index处的字符
 *
 *  getline(cin, variable, '\n') 针对那些需要空格的字符串，规定了结束的方法；注：最后的值默认是回车
 */

int main()
{
    //string city1, city2;
    //cin>> city1 >> city2;

    //cout<<city1 << city2 << endl;//会自动去掉空格，把空格当成了两个

    //need
    string a, b;
    cout<<"a: ";
    getline(cin, a);
    cout<<"b: ";
    getline(cin, b);

    cout<<a<<" "<<b;


    return 0;
}
