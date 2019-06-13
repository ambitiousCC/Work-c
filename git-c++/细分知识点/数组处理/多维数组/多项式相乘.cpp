#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;

	int m[a][2];
	int i=0,j=0,k=0;
	for(i=0;i<a;i++)
        for(j=0;j<2;j++)
			cin>>m[i][j];

	cin>>b;
	int n[b][2];
	for(i=0;i<b;i++)
		for(j=0;j<2;j++)
			cin>>n[i][j];

	//处理
	int len = m[0][1] + n[0][1] + 1;
	//chushihua
	int c[len][1];
	for(i=0;i<len;i++)
			c[i][0]=0;

	//处理
	for(i=0;i<len;i++)
	{
		for(j=0;j<a;j++)
			for(k=0;k<b;k++)
			{
				if(m[j][1]+n[k][1]==i)
				{
					c[i][0]+=m[j][0]*n[k][0];
				}
			}
	}

	for(i=len-1;i>=0;i--)
    {
        if(c[i][0]!=0)
            cout<<c[i][0]<<" "<<i<<" ";
    }

	return 0;
}




