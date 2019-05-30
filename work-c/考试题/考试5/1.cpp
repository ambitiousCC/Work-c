#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

void move(int n[], int,int);
int main()
{
	int a, b;
	cout<<"Input n,m:";
	cin>>a>>b;

	int n[a];
	for(int i = 0; i < a; i++)
		cin>>n[i];

	move(n, a, b);

	return 0;
}

void move(int n[], int a, int b)
{
	//from index m
	int m = a-b;
	int cpy[a];

	//in front of it
	for(int j = 0; j < m; j++)
	{
		cpy[j+b] = n[j];
	}

	for(int k = m; k < a; k++)
	{
		cpy[k-m] = n[k];
	}

    printf("After move:");
    cout<<right;
	for(int l = 0; l < a; l++)
	{
	    //printf("%5d",cpy[l]);
        cout<<setw(5)<<cpy[l];
	}
}