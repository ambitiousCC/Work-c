#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a1,b1,a,b;
	cin>>a1;
    a = a1/2;
	int m[a][2];

	int i=0,j=0;

	for(i=0;i<a;i++)
        for(j=0;j<2;j++)
			cin>>m[i][j];

	cin>>b1;
	b = b1/2;
	int n[b][2];
	for(i=0;i<b;i++)
		for(j=0;j<2;j++)
			cin>>n[i][j];
#if 0
    for(i=0;i<a;i++)
    {
        cout<<m[i][0]<<" "<<m[i][1]<<" ";
    }

    for(i=0;i<b;i++)
    {
        cout<<n[i][0]<<" "<<n[i][1]<<" ";
    }
#endif

    int temp=m[0][1];
    if(m[0][1]<n[0][1])
    {
        temp = n[0][1];
    }


    int len = temp+1;

    //chushihua
	int c[len][1];
	for(i=0;i<len;i++)
			c[i][0]=0;

    for(i=0;i<len;i++)
    {
        int sum=0;

        for(int k=0;k<a;k++)
        {
            if(m[k][1]==i)
                sum+=m[k][0];
        }

        for(int l=0;l<b;l++)
        {
            if(n[l][1]==i)
                sum+=n[l][0];
        }

        c[i][0]=sum;
    }

    for(i=len-1;i>=0;i--)
    {
        if(c[i][0]!=0)
            cout<<c[i][0]<<" "<<i<<" ";
    }
    cout<<endl;

    return 0;
}
