#include <iostream>
using namespace std;
int main()
{
	int a[100],b[100],i,m,n,j=0,k=0;
	cout<<"输入人数";
	cin>>n;
	cout<<"输入号码";
	cin>>m;

	//数组存编号
	for(i=0;i<n;i++)
		a[i]=i+1;

	//while + for = fantasty
	while(j!=n)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
				continue;
			k++;
			if(k!=m)
				continue;
			k=0;
			b[j++]=a[i];
			a[i]=0;
		}
	}

	cout<<"最后选中的人是"<<b[n-1]<<endl;

	return 0;
}
	