#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a letter grade: ";
    char cas;
    cin>>cas;

    switch(cas)
    {
    case 'a':
        cout<<4;
        break;
    case 'A':
        cout<<4;
        break;
    case 'B':
        cout<<4;
        break;
    case 'b':
        cout<<3;
        break;
    case 'C':
        cout<<2;
        break;
    case 'c':
        cout<<2;
        break;
    case 'd':
        cout<<1;
        break;
    case 'D':
        cout<<1;
        break;
    case 'F':
        cout<<0;
        break;
    case 'f':
        cout<<0;
        break;
    default:
        cout<<"is an invalid grade";
    }


    return 0;
}
