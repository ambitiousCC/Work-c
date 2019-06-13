#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    vector<int> v;
    int i;
    for(i = 2; i < a; i++)
    {
        while(a%i==0)
        {
            v.push_back(i);
            a/=i;
        }
    }

    if(a%i==0)
        v.push_back(i);

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        if(it!=v.end()-1)
            cout<<*it<<",";
        else
            cout<<*it;
    }

    return 0;
}

