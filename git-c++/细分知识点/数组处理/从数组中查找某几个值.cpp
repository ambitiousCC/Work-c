#include <iostream>

using namespace std;

void find(int a[], int len, int key);
int main()
{
	//先弄个整型值数组
	int N;
	cin>>N;

	int a[N];

	for(int i = 0; i < N; i++)
	{
		cin>>a[i];
	}

	int key;
	cout<<"Enter the key which you want to find: ";
	cin>>key;
	find(a, N, key);

	return 0;
}

void find(int a[], int len, int key)
{
	int keyi;
	for(int j = 0; j < len; j++)
	{
		if(a[j]==key)
			keyi = j;
	}
	cout<<"The key's Index is "<<keyi<<endl;
}