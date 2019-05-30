#include <iostream>
#include <vector>

using namespace std;

int main()
{
/*===================简单插入=======================*/
	//建立方法一
	vector<int> nums;

	//相当于建立了一个int类型的数组容器
	int a = 34;

	//添加元素方式和Java差不多
	//从后往前
	nums.push_back(a);

	//遍历的方法1
	for(int i = 0; i < nums.size(); i++)
		cout<<"容器中含有的元素:"<<nums[i]<<endl;

/*================详细的插入方法=================*/
	vector<int> v(3);  

    v[0]=2;  
    v[1]=7;  
    v[2]=9;  
	//在最前面插入新元素
    v.insert(v.begin(),8);  
    v.insert(v.begin()+2,1);//在迭代器中第二个元素前插入新元素  
    v.insert(v.end(),3);//在向量末尾追加新元素。  

	//遍历的方法2：使用迭代器
    vector<int>::iterator it;  
	for(it=v.begin();it!=v.end();it++)  
    {
        cout<<*it<<" ";
    }
    cout<<endl;

/*=====================删除元素===================*/
	v.clear();//清空所有元素
	cout<<v.empty()<<endl;//输出1代表true

/*================================================*/
	vector<int> myvector;//要么不声明，要么指明长度
	for(int w = 0; w < 10; w++)
		myvector.push_back(w);

	// erase the 6th element
	myvector.erase (myvector.begin()+5);

	// erase the first 3 elements:
	myvector.erase (myvector.begin(),myvector.begin()+3);
	
	cout<<endl<<endl;
	for(unsigned j = 0; j < myvector.size(); j++)
		cout<<myvector[j]<<endl;

	return 0;
}
//http://www.cplusplus.com/reference/vector/vector/erase/