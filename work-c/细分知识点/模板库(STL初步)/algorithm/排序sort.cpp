#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//只有vector/string/deque可以sort
//默认为递增，修改默认
bool cmp(int a, int b) {
	return a>b;
}

int main() {
	vector<int> v;
	for(int i = 0; i < 5; i++)
		v.push_back(i);
	sort(v.begin(),v.end(),cmp);
	for(int j = 0; j < v.size(); j++) 
		cout<<v[j]<<" ";
	cout<<endl;

	return 0;
}
