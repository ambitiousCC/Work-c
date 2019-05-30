#include <iostream>

using namespace std;

int main()
{
    char cases;
    cin>>cases;

    //static_cast<char>(num + 'a')
    int num = 0;
    for(int i = 0; i < 26; i++)
    {
        if(cases == static_cast<char>(i + 'a'))
        {
            num = i;
            cout<<static_cast<char>(num + 'A');
        }
        if(cases == static_cast<char>(i + 'A'))
        {
            num = i;
            cout<<static_cast<char>(num + 'a');
        }
    }

    return 0;
}

