#include <iostream>

using namespace std;

int main()
{
    double item = 1;
    double sum = 0;

    while(item != 0)
    {
        sum += item;
        item -= 0.1;
        //cout<<sum<<endl; // this code is only for testing
    }

    return 0;
}
