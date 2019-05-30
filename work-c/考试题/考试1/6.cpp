#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(1 < n && n < 21)
    {
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                cout<<" ";
            }
            cout<<"*";                      //i=0       n-2i
            for(int k = 0; k <=(n-2*i); k++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int l = 0; l <= 2*i ; l++)  //第一次输出1
            {
                cout<<" ";
            }
            cout<<"*";                      //i=0       n-2i
            for(int k = 0; k <=(n-2*i); k++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
    }

    return 0;
}
