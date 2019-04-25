#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char cas;
    cout<<"Enter an uppercase letter: ";
    cin>>cas;

    if(isupper(cas))
    {
        cout<<"The lowercase letter is "<<static_cast<char>(tolower(cas))<<endl;
    }

    return 0;
}
