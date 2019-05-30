#include <bits/stdc++.h>

using namespace std;
const double pi = 3.1415;
int main()
{
    double t = 1,
    s =0;
    for(int i = 0; i <=63; i++)
    {
        s = s + t;
        t = 2 * t;


    cout<<s/1.4e8<<endl;
    while(t>1e-18)
    {
        pi = pi + t;
        i = i + 1;
        j = j+ 2;
        t = t*i/j;
    }
    cout<<setprecision(17)<<2*pi;
    }

    return 0;
}

