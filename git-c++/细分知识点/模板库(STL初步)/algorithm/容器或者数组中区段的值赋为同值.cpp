#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//一定要使用模板声明呐
void tell(int a[],int);

template <typename T>
void tell(vector<T>obj);
int main() {
	int a[4] = {1,3,5,6};
	tell(a,4);
	fill(a,a+4,233);
	tell(a,4);

	vector<double> v;
	for(int i = 0; i < 4; i++) {
		v.push_back(i/3.0);
	}
	tell(v);
	fill(v.begin(),v.begin()+4,233);
	tell(v);

	return 0;
}
void tell(int a[], int len) {
	for(int i = 0; i < len; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
template <typename T>//发现，必须需要这个声明
void tell(vector<T>obj) {
	for(int i = 0; i < obj.size(); i++)
		cout<<obj[i]<<" ";
	cout<<endl;
}

