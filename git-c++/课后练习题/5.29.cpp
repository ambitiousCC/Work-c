#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> it;
	for(int i = 2001; i <=2100; i++) {
		if((0==i%4 && 0!=i%100)|| 0==i%400)
			it.push_back(i);
	}

	for(int j = 0; j < it.size(); j++) {
		if(0 != (j+1)%10)
			cout<<it[j]<<" ";
		else
			cout<<it[j]<<endl;
	}

	cout<<endl;
	return 0;
}
