/**
 * Author：      崔秦
 * function:     实现输入的数字逆序输出
 * version:      1.0
 * Date:         2019/3/11
 * thinking:     利用取余和求商获取各个位数的数字
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    int m,n;

    //输入一个数字m
    cin>>m;

    n = m%10;//得到m的个位来作为最高位

    while(m = m/10)//当m减位可行时继续执行
    {
        n = n*10 + m%10;//倒叙数字是个位加十位
    }

    cout<<n;

    return 0;
 }
