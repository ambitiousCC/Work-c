/**
 *  function:   判断回文数
 *  file_name:  work1.cpp
 *  Author:     崔秦
 *  data:       2019.03.01
 *  version:    1.0
 *  email:      1297571059@qq.com
 *  thinking:   对取余数的重要运用：整数取余不会四舍五入，只会直接返回值
 */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"输入万位数，判断是不是回文数";
    cin>>num;

    int a,b,c,d;

    a = num / 10000;//余数为万位数
    b = num % 10000 / 1000;//获得余数为除开万位的千数，再取得余数为千位
    c = num % 100 / 10;
    d = num % 10;

    if(a == d && b == c)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}
