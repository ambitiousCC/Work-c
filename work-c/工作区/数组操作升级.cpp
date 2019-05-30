#include <iostream>

using namespace std;

// 结构体：复合类型,用户定义类型
struct returnvalue
{
	int max;
	int min;
	int imax;
	int imin;
	int aver1;
	int aver2;
	int i;
	int j;
	int k;
	int m;
	int p;
	int q;
};

void SortIndex(int a[], int l, returnvalue &r);

int main()
{
	int array[5]={1,5,2,4,3};
	returnvalue r;
	SortIndex(array, 5,r);
	cout << "max=" << r.max << endl;
	cout << "min=" << r.min << endl;
	cout << "imax=" << r.imax << endl;
	cout << "imin=" << r.imin << endl;
	cout << "aver1=" << r.aver1 << endl;
	cout << "aver2=" << r.aver2 << endl;
	cout << "i=" << r.i << endl;
	cout << "j=" << r.j << endl;
	cout << "k=" << r.k << endl;
	cout << "m=" << r.m << endl;
	cout << "p=" << r.p << endl;
	cout << "q=" << r.q << endl;

	return 0;
}

void SortIndex(int a[], int l, returnvalue &r)
{
	int *b=new int [l];// 动态内存分配
	for(int c=0; c<l; c++)
		b[c]=a[c];

	//选择排序
    for(int i = 0; i < l ; i++)
    {
        for(int j = i + 1; j < l ; j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

	r.max=a[l-1];
	r.imax=a[l-2];
	r.min=a[0];
	r.imin=a[1];
	if(l % 2 == 0)
	{
		r.aver1=a[l/2-1];
		r.aver2=a[l/2];
	}
	else
		r.aver1=r.aver2=a[(l+1)/2];
	for(int d=0; d<l; d++)
	{
		if(b[d]==r.max)
			r.i=d;
		if(b[d]==r.min)
			r.j=d;
		if(b[d]==r.imax)
			r.k=d;
		if(b[d]==r.imin)
			r.m=d;
		if(b[d]==r.aver1)
			r.p=d;
		if(b[d]==r.aver2)
			r.q=d;
	}
}
