#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a,20,'\n');

    int i=0;
    string ss = "";

    while(a[i]!='\0')
    {
        ss += a[i];
        i++;
    }
    cout<<ss<<endl;

    return 0;
}
