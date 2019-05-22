#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> v;

	int a;
	while(cin>>a)
	{
		v.push_back(a);
	}

	vector<int>::iterator it;
	//max
	cout<<"============max()=================="<<endl;
	int c = 1,
		b = 23;
    cout<<c<<" and "<<b<<endl;
	cout<<max(c,b)<<endl<<"================sort()==============="<<endl;;

	//sort
	//关于容器的排序
	sort(v.begin(),v.end());
	cout<<"===========数组=================="<<endl;
	//关于数组的排序
	int e[] = {2,323,24,324,34,24,23};
	sort(e,e+sizeof(e)/sizeof(int));
	cout<<endl;

	for(int i = 0; i < sizeof(e)/sizeof(int); i++)
        cout<<e[i]<<" ";
    cout<<endl<<"============迭代器================="<<endl;

	for(it = v.begin(); it!= v.end(); it++)
		cout<<*it<<endl;

    //find
    //在容器
    cout<<"================find()==================="<<endl;
    cout<<"================迭代器()==================="<<endl;
    vector<int>::iterator iter=find(v.begin(),v.end(),21);
    if(iter==v.end()) {
        cout<<"莫得"<<endl;
    } else {
        cout<<*it<<"在里面待着"<<endl;
    }
    cout<<endl<<"============数组========================"<<endl;

    //在数组中
    int *p = find(e,e+sizeof(e)/sizeof(int),24);
    if(p==e+sizeof(e)/sizeof(int)) {
        cout<<"莫得"<<endl;
        return 1;
    } else {
        cout<<"有"<<endl;
    }

	return 0;
}
