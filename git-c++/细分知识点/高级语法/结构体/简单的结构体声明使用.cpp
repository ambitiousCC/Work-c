#include <iostream>
#include <string>
using namespace std;
struct stu {
	string name;
	char sex;
	int age;
};

//妈的vc不支持这个语法woc
//struct stu b = {"cuiqin2", 'm', 19};

//定义别名需要typedef 使得后面的可以直接成为一种类型
typedef struct stud {
	string name;
	string sex;
	int age;
	int id;
}st;

//建立长度为2的结构体数组
struct stude {
	string name;
	int age;
	int id;
}stu[2];

int main() {

	struct stu a;
	a.name = "cuiqin";
	a.sex = 'm';
	a.age = 19;
	cout<<"原版测试: ";
	cout<<a.name<<endl;

//	cout<<b.sex<<endl;
	st c;
	c.name = "cuiqinhaha";
	c.age = 19;
	c.id = 011;
	c.sex = "nan";
	cout<<"别名声明测试: ";
	cout<<c.name<<endl;

	//vc似乎也不支持结构体数组声明，真气人
	stu[0] = {"cuiqin",19,011};
    cout<<"结构体数组声明测试: ";
	cout<<stu[0].name<<endl;

	return 0;
}
