
// 1970 1 1 Unix 元年   2019 3 20   N days%7

#include <iostream>

using namespace std;

int main()
{

    // 循环：编程语言里面的循环本质上是在条件满足的时候重复执行一个动作序列；
    /* for循环:  for(expression1; expression2; expression3)
                 {
                     actions;
                 }
                 在这个结构里面，for是关键字，代表for循环；后面的小括号要紧挨着
                 for（也可以在二者之间插入空格或者制表符tab），小括号代表for循环的
                 初始状态、循环继续条件以及循环变量的递增或者递减。
                 小括号里总共有三个表达式，expression1表示循环变量的初始条件，
                 expression2本质上是个条件表达式，表示是否继续执行循环体
                 expression3表示循环变量的修改（递增或者递减）
                 大括号{}代表for循环的循环体。

                 for循环执行的逻辑顺序如下：
                 首先expression1先执行，然后执行expression2，如果expression2的结果
                 为真，则执行循环体，否则整个循环结构结束。循环体执行完毕，则执行
                 expression3；接下来执行expression2，如果条件为真，执行循环体；否则
                 循环结束，然后执行expression3；以此类推。


     */
     for(int i=1; i<=10; i++)
        cout << i << "  ";
     cout << endl;

     // Compute the sum of 1 to 100
     int sum=0;
     for(int i=1;i<=100; i++)
        sum=sum+i; // sum+=i;
     cout << "sum = " << sum << endl;

     int array[10]; // array[0]->array[9]
     for(int i=0; i<10; i++)
     {
        array[i]=i;
        cout << array[i]+1 << " ";
     }

    cout << endl;
    cout << "for change begins+++++++++++++++++++++\n";
    //  for循环的变形
    for(int i=1; i<=10; i++)
        cout << i << "  ";
    cout << endl;

    // 循环的四要素：任何循环结构必须具备四要素：初值、循环条件；
    // 循环体；循环变量的修改
    int i=1;
    for( ; i<=10; i++)
        cout << i << "  ";
    cout << endl;

    for(i=1; ; i++) // 因为expression2被省略了，所以条件变成了永真，
    {
       // 循环条件可以放在循环体里
        cout << i << "  ";
        if(i==10)
            break;
    }
    cout << endl;

    for(int i=0; i++<10; )
    {
        cout << i << "  ";
        //i++;
    }
    cout << endl;
    i=1;
    for( ; ; )
    {
        cout << i << "  ";
        if(i==10)
            break;
        i++;
    }

    cout << endl;

    return 0;
}
