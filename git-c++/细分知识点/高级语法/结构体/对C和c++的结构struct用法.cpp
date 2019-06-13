#include <iostream> //c++
#include <cstdlib>

using namespace std; 

//在C中定义一个结构体类型要用typedef:
typedef struct Student
{
	int a;
}Stu;
//于是在声明变量的时候就可：Stu stu1;
//如果没有typedef就必须用struct Student stu1;来声明
//这里的Stu实际上就是struct Student的别名。
//另外这里也可以不写Student（于是也不能struct Student stu1;了)

typedef struct
{
	int a;
}Stu;

//但在c++里很简单，直接
struct Student
{
	int a;
};
//于是就定义了结构体类型Student，
//声明变量时直接Student stu2；

//在c++中如果用typedef的话，又会造成区别：
struct Student1
{ 
	int a; 
}stu1;//stu1是一个变量 

typedef struct Student2 
{ 
	int a; 
}stu2;//stu2是一个结构体类型 
//使用时可以直接访问stu1.a
//但是stu2则必须先 stu2 s2;
//然后 s2.a=10;

typedef struct _point
{ 
	int x; 
	int y; 
} point; //定义结构体，给结构体一个别名 

struct _hello
{ 
	int x,y; 
} hello; //同时定义结构体和对象 

int main() 
{ 
	point pt1; 
	pt1.x = 2; 
	pt1.y = 5; 

	cout<< "ptpt1.x=" << pt1.x << "pt.y=" <<pt1.y <<endl; 
	//hello pt2; 
	//pt2.x = 8; 
	//pt2.y =10; 
	//cout<<"pt2pt2.x="<< pt2.x <<"pt2.y="<<pt2.y <<endl; 
	//上面的hello pt2;这一行编译将不能通过. 为什么? 
	//因为hello是被定义了的对象实例了. 
	//正确做法如下: 用hello.x和hello.y 
	hello.x = 8; 
	hello.y = 10; 
	cout<< "hellohello.x=" << hello.x << "hello.y=" <<hello.y <<endl; 

	return 0; 
}