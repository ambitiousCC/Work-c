#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"Enter an ASCII code: ";
    cin>>i;

    cout<<"The character is "<<static_cast<char>(i);
    return 0;
}
