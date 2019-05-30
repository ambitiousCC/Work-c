// 求一个班级的平均成绩

#include <iostream>

using namespace std;

// function:为了模块化而引入，它的格式为
// 函数返回至类型  函数名(参数表，可以为空){函数体}
//参数表里的参数a、b均为形式参数
int max(int a, int b); // 这叫做函数声明，其中max(int a, int b)叫做函数签名

int main()
{
#if 0 // 确定人数的班级平均成绩
    int score;
    int sum=0; //全班成绩的累加和，需要初始化为0
    int number=10;

    for(int i=0; i<number; i++)
    { //重复执行的动作序列是：输入一个成绩，把成绩加到累加和
        cout << "Input a score: ";
        cin >> score;
        sum+=score;
    }

    cout << "Average Score of this class is: " << sum/10 << endl;




    // 非确定人数的班级平均成绩


    int score;
    int sum=0; //全班成绩的累加和，需要初始化为0
    int number=0; // 人数计数器

    cout << "Input a score: ";
    cin >> score;

    while(-1!=score) //标记：标记控制的循环
    { //重复执行的动作序列是：输入一个成绩，把成绩加到累加和

        sum+=score;
        number++;

        cout << "Input a score: ";
        cin >> score;
    }
    if(0!=number)
        cout << "Average Score of this class(" << number << " persons )is: " << (float)sum/number << endl;
    else
        cout << "No Input score!" << endl;

#endif

    int a, b;
    cout << "Input two integers: " << endl;
    cin >> a >> b;

    //此处出现的max(a,b)叫做函数调用，其中的a、b叫做实际参数和上述的形式参数是两码事
    cout << "the maximum value of these two integers is: " << max(a, b) << endl;

    return 0;
}


int max(int a, int b)
{
    //return (a>=b?a:b);
    if(a>=b)
        return a;
    else
        return b;
}
