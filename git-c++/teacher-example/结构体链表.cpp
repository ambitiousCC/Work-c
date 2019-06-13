#include <iostream>
#include <stack>

using namespace std;

// 结构体的声明
struct time{
     int day;
	 int month;
	 int year;
};
// 使用typedef为结构体声明别名
typedef struct student1{
      char *name;
	  int number;
	  int age;
	  time t;
	  struct student1 *pnext;
}Student1,*Ptrstudent1;

typedef struct student2{
      char name[20];
	  int number;
	  int age;
	  time t;
	  struct student2 *pnext;
}Student2,*Ptrstudent2;

void stu1()
{
	/*三种定义方法*/
   struct student1 *p = new student1; // malloc()
   Student1 *p1 = new Student1;
   Ptrstudent1 p2 = new Student1;

   /*有关信息的初始化*/
   p->name = "蒋家富";
   p->age = 20;
   p->number = 15101;
   p->t.day = 6;
   p->t.month = 6;
   p->t.year = 2016;
   p->pnext = NULL;

   p1->name = "郑深语";
   p1->age = 20;
   p1->number = 15102;
   p1->t.day = 5;
   p1->t.month = 5;
   p1->t.year = 2016;
   p->pnext = p1;
   p1->pnext =	NULL;

   p2->name = "刘姣姣";
   p2->age = 20;
   p2->number = 15103;
   p2->t.day = 1;
   p2->t.month = 1;
   p2->t.year = 2016;
   p1->pnext = p2;
   p2->pnext = NULL;

   /*信息的输出*/
   for(;p != NULL; p = p->pnext)
   {
       cout<<"学生姓名"<<p->name<<endl;
       cout<<"学生年龄"<<p->age<<endl;
	   cout<<"学生学号"<<p->number<<endl;
	   cout<<"学生入学年份"<<p->t.year<<endl;
	   cout<<"学生入学月份"<<p->t.month<<endl;
	   cout<<"学生入学日子"<<p->t.day<<endl;
	   cout<<"\n\n";
   }
}

void stu2()
{
    /*三种定义方法*/
	struct student2 *head = NULL;//头结点，用来存放首地址
	Student2 *p1 , *p2 ;
	p1 = p2 = new Student2;
    int N = 0;  //用来记录学生的数量

	while(true)
	{
	   cout<<"请输入学生的学号（输入学号以0结束信息输入）:";
	   cin>>p1->number;

	   if(p1->number == 0)  //判断是否结束学生信息的输入
		   break;
       //如果输入学号不为0，则继续输入学生信息
	   N++;

	   cout<<"请输入学生的姓名:";
	   cin>>p1->name;
	   cout<<"请输入学生的年龄:";
	   cin>>p1->age;
	   cout<<"请输入学生的入学年份:";
	   cin>>p1->t.year;
	   cout<<"请输入学生的入学月份:";
	   cin>>p1->t.month;
	   cout<<"请输入学生的入学日子:";
	   cin>>p1->t.day;

	   if(1 == N)
	     head = p1;
	   else
		   p2->pnext = p1;
	   p2 = p1;
	   p1 = new student2;
	}

    p2->pnext = NULL;

    Student2 *p = head;

	//将输入的学生信息输出
	cout<<"\n\n输出学生信息为:"<<endl;
	 for(;p != NULL; p = p->pnext)
       {
           cout<<"学生姓名"<<p->name<<endl;
           cout<<"学生年龄"<<p->age<<endl;
           cout<<"学生学号"<<p->number<<endl;
           cout<<"学生入学年份"<<p->t.year<<endl;
           cout<<"学生入学月份"<<p->t.month<<endl;
           cout<<"学生入学日子"<<p->t.day<<endl;
           cout<<"\n\n";
       }

}

int main()
{
   stack s;
   s.push(10);
   s.pop();
   int n;
   cout<<"选择1直接输出内部存储的学生数据信息"<<endl;
   cout<<"选择2将必须先输入学生信息然后打印输出"<<endl;
   cout<<"当输入序号为0时，表示结束选择"<<endl;
   cout<<"请输入你要选择的程序序号:"<<endl;
   while(cin>>n)
   {
	   if(n == 0)
		   break;

       switch(n)
	   {
         case 1:  stu1(); break;

         case 2:  stu2(); break;

         default:
	         cout<<"请输入错误"<<endl;
	           break;
	   }

   }

return 0;
}
