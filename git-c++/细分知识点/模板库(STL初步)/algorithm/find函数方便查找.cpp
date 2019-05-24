#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<string> v;
    v.push_back("aaa");
    v.push_back("bbb");
    v.push_back("ccc");
    v.push_back("ddd");
    for(int i = 0; i <v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    string need = "aaa";
    if(find(v.begin(),v.end(),need)!= v.end()){
        cout<<"find "<<need<<"_index: ";
        //发现find函数返回的类型是int
        int index = find(v.begin(),v.end(),need)-v.begin();
        cout<<index<<endl;
        /*看到find函数的返回结果与vector的e
		  nd比较可以看出其实这是一个指针
          ，那么如果我们想要获得索引
          那么将返回结果与begin做差即可
		 */
    }
    else
        cout<<"NO"<<endl;

	return 0;
}
