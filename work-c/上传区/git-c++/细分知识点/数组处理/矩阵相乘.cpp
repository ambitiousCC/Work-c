#include <iostream>

using namespace std;


struct varibles
{
	int c1, c2, l1, l2;//列c，行l
};//需要分号结尾

void judgement(int, int, varibles &r);
int main()
{
	varibles r;
	cout<<"Enter the first one's c and l";
	cin>>r.c1>>r.l1;
	cout<<"Enter the second one's c and l";
	cin>>r.c2>>r.l2;

	int x[r.c1][r.l1];
	int y[r.c2][r.l2];
	for(int a = 0; a < r.c1; a++)
	{
		for(int b = 0; b < r.l1; b++)
		{
			cin>>x[a][b];
		}
	}
	for(int c = 0; c < r.c2; c++)
	{
		for(int d = 0; d < r.l2; d++)
		{
			cin>>y[c][d];
		}
	}

	judgement(x,y,r);

	return 0;
}

void judgement(int a[][], int b[][], varibles &r)
{
	if(r.c1 != r.l2)
	{
		cout<<"can't "<<endl;
		break;
	}

	int c[r.c2][r.l1];
	int c1[]
	for(int e = 0; e < r.l2; e++)
	{
		for(int f = 0; f < r.c1; f++)
		{
			 = a[f][e] * b[e][f];