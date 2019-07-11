#include <iostream>
#include <string>
using namespace std;
void print(int,int,int);
int main()
{
    int n;
    cin>>n;

    int origin = 0,times = 0, bb=0;
    for(int i=1;i<n;i++)
    {
        int sum = i;
        origin = sum;
        times = 0;
        for(int j=i+1;j<n;j++)
        {
            sum += j;
            times++;
            if(sum==n)
            {
                print(n,origin,times);
                bb++;
                break;
            }
        }
    }
    if(bb==0)
        cout<<"NONE"<<endl;

    return 0;
}
void print(int n, int origin, int times)
{
    cout<<origin<<" ";
    while(times--)
    {
        origin++;
            cout<<origin<<" ";
    }
    cout<<endl;
}
