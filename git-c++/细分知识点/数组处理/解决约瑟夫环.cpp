#include <iostream>
using namespace std;
int main()
{
	int a[1234],b[213],n,m,i,k=0,j=0;
	//输入人数和报道的数字
	cin>>n>>m;
	for(i=0;i<n;i++)
		a[i]=i+1;
	//只要是剔除的人数没有到达总人数就会循环
	while(j!=n)
	{
		for(i=0;i<n;i++)
		{
			//如果被注销掉了就是变成零了以后跳过此次循环
			if(a[i]==0)
				continue;
			k++;//计数君
			if(k!=m)//没有报到指定数字跳过循环
				continue;
			k=0;//否则从零开始
			b[j]=a[i];//同时把被剔除的人存到b
			j++;
			a[i]=0;//a的对应位置空出
		}
	}
	
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";//此处知道最后一个是最后被提出的人
	return 0;
}

//1 2 3 4
//1 2 1 2
//1   2
//剩余1