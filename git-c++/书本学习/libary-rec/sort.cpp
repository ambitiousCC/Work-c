#include <iostream>

using namespace std;


int main()
{
    int src[10] = {11,12,47,24,49,69,90,89,18,39};//一维数组中包含10个整数
    //从大到小排序
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(src[i]<src[j])    //如果前一个元素小于后一个元素
            {
                int temp;        //临时变量
                temp = src[i];
                src[i] = src[j]; //大的元素到前一个位置
                src[j] = temp;   //小的元素到后一个位置
            }
        }
    }
   // 输出各元素
    for(int k = 0; k < 10; k++)
        cout<<src[k]<<endl;

    return 0;
}
