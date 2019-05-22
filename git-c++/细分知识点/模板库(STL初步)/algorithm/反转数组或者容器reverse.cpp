#include <string>
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	//指定数组的索引值处进行翻转
    int a[10]={10,11,12,13,14,15};
    reverse(a,a+4);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }

	//使用数组的迭代器,对数组的翻转
	string str = "dsafsad";
	reverse(str.begin(), str.end());
	cout<<str<<endl;

    return 0;
}
