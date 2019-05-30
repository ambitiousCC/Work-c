#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[4] = {1,2,6,5};
	for(int j = 0; j < 2; j++) 
		swap(a[j],a[sizeof(a)/sizeof(int)-1-j]);
	
	for(int i = 0; i < 4; i++) {
		cout<<a[i]<<" ";
	}

	return 0;
}
