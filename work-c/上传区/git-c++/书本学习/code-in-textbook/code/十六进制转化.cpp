#include <iostream>

using namespace std;

/**
 *  Preview 使用一个static_cast<char>() 括号里面： 一个整型值 + ？
 *      需要从零开始对应
 *      比如 在?直接加'0' 就是这个整型值在ASCII表中的对应的数字字符
 *                     'A'                                    大写字母字符
 */

int main()
{
    cout<<"Enter a decimal number: ";
    int decimal;
    cin >> decimal;

    string hex = "";

    while(decimal != 0)//原输入当做除数
    {
        int hexValue = decimal % 16;//获取除数的余数

        //三目表达式：如果余数大于零小于10 产生一个玩意儿当做字符类型，后面加零，不是就减去10后加A
        char hexChar = (hexValue <= 9 && hexValue >= 0) ? static_cast<char>(hexValue + '0') : static_cast<char>(hexValue - 10 + 'A');

        hex = hexChar + hex;
        decimal = decimal / 16;
    }
    char a = static_cast<char>(0 + 'a');//从零开始哦

    cout<<"The hex number is " << hex << endl;
    cout<<a<<endl;

    return 0;
}
