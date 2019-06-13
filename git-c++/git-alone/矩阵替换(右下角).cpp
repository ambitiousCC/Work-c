//思路：先将插入位置转换到左上角以后通过判断是否越界然后再相应位置输入
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a1, b1, a2, b2;
	cin>>a1>>b1;

	int x1[a1][b1];
	for(int i = 0; i < a1; i++)
	{
		for(int j = 0; j < b1; j++)
		{
			cin>>x1[i][j];
		}
	}

	cin>>a2>>b2;
	int x2[a2][b2];
	for(int i = 0; i < a2; i++)
	{
		for(int j = 0; j < b2; j++)
		{
			cin>>x2[i][j];
		}
	}

    int n, m;
    cin>>n>>m;

    int n1, m1;
    n1 = n-a2;
    m1 = m-b2;

    for(int i = 0; i < a2; i++)
    {
        for(int j = 0; j < b2; j++)
        {
			if(i+n1<a1&&j+m1<b1)//防止越界
				x1[i+n1][j+m1] = x2[i][j];//如果没有越界，那么直接在所谓的位置进行赋值即可
        }
    }

    for(int i = 0; i < a1; i++)
    {
        for(int j = 0; j < b1; j++)
        {
            if(j!=b1-1)
                cout<<x1[i][j]<<" ";
            else
                cout<<x1[i][j]<<endl;
        }
    }
	return 0;
}
