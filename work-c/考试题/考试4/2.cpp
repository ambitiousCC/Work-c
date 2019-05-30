#include <iostream>

using namespace std;
void judge(int num);

int main()
{
    int num;
    cin>>num;

    judge(num);

    return 0;
}
void judge(int num)
{
    bool a = true;
    for(int i = 2; i<num ; i++)
    {
        if(num%i==0)
        {
            a = false;
        }
    }
    if(a)
    {
        //怎么获取交换位置以后的数？
        //取余数
        int b = num;
        int length = 0;
        for(int i = 1; i<10;i++)
        {
            if(b/(i * 10)!=0)
            {
                i++;
            }
            else
            {
                cout<<"no";
            }
        }

    }
    else
    {
        cout<<"no";
    }
}
