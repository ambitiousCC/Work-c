#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void perm(int list[],int low,int high)
{
    if(low==high)  //当low==high时,此时list就是其中一个排列,输出list
	{
        for(int i=0;i<=low;i++)
            cout<<list[i];
        cout<<endl;
    } else
	{
        for(int i=low;i<=high;i++)//每个元素与第一个元素交换
		{
            swap(list[i],list[low]);
            perm(list,low+1,high); //交换后,得到子序列,用函数perm得到子序列的全排列
            swap(list[i],list[low]);//最后,将元素交换回来,复原,然后交换另一个元素
        }
    }
}
int main()
{
    int list[]={1,2,3,4,5};
    perm(list,0,4);

    return 0;
}
