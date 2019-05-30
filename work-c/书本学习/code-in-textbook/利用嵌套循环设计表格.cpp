#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"     Multiplication Table\n";

    cout<<"n| ";
    for(int j = 1; j <= 9; j++)
        cout<<setw(3)<<j;
    //表头搞完了

    cout<<"\n";
    cout<<"-------------------------------\n";

    //新的部分进行绘制表身
    for(int i = 1; i <= 9; i++)
    {
        cout<<i<<" | ";//开头
        for(int j = 1; j <= 9; j++)
        {
            cout<<setw(3)<<i * j;
        }
        cout<<"\n";
    }

    return 0;
}

