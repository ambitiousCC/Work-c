#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned int count = 0;
	cin>>count;

	//动态赋值
	int *x = new int[count];

	for(int i =0; i < count ; i++)
		x[i] = i;

	for(int j = 0; j < count; j++)
		cout<<x[j]<<endl;
	
	//删除动态数组：删除掉的不仅仅是指针
	delete[] x;
	return 0;
}