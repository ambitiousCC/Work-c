#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    //布尔值判断下一个全排列的
    int a[4] = {1,2,3,4};
    do{
        printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
    } while(next_permutation(a,a+4));

	char b[4] = {'a','b','c','d'};
	do {
		cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "
			<<b[3]<<endl;
	} while(next_permutation(b,b+4));

    return 0;
}
