// using struct

#include <iostream>
#include <cstring>

using namespace std;

struct student
{
	char name[20];
	int number;
	char sex;
	char id[20];
	char address[50];
	student *next; //自引用指针
};

int main()
{
	student stu; // 声明了一个结构体类型的变量
	student *p = &stu;
	
	// 访问结构体成员，圆点运算符
	strcpy(stu.name, "xidada");
	stu.number = 18001;
	stu.sex = 'm';
	strcpy(stu.id,"410101199810010558");
	strcpy(stu.address, "河南省郑州市金水区金水路200号");
	

	cout << " the infomation of this student are: " << endl;
	cout << " name: " << stu.name << endl;
	cout << " number: " << stu.number << endl;
	cout << " sex: " << stu.sex << endl;
	cout << " id: " << stu.id << endl;
	cout << " address: " << stu.address << endl;


	cout << " \n Point type: the infomation of this student are: " << endl;
	cout << " name: " << p->name << endl; // 指针需要使用箭头运算符访问结构体的成员
	cout << " number: " << p->number << endl;
	cout << " sex: " << p->sex << endl;
	cout << " id: " << p->id << endl;
	cout << " address: " << p->address << endl;

	student stud[3];
	int i=0;
	for( ; i<3; i++)
	{
		cout << "请输入第" << i+1 << "个学生的信息" << endl;
		cout << "name: ";
		cin >> stud[i].name;
		cout << "number: ";
		cin >> stud[i].number;
		cout << "sex: ";
		cin >> stud[i].sex;
		cout << "id: ";
		cin >> stud[i].id;
		cout << "address: ";
		cin >> stud[i].address;
	}

	for(i=0; i<3; i++)
	{
		cout << "第" << i+1 << "个学生的信息" << endl;
		cout << "name: " << stud[i].name;
		cout << "\nnumber: " << stud[i].number;
		cout << "\nsex: " << stud[i].sex;
		cout << "\nid: " << stud[i].id;
		cout << "\naddress: " << stud[i].address << endl;
	}

	int count=0;
	student *pstu= NULL; //NULL将pstu初始化为空，NULL的值随着OS的不同会不同；
	pstu = new student;
	while(true)
	{
		
	}

	
	return 0;
}
