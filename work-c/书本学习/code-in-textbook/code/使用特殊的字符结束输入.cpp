#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer(the input ends if it is 0)";
    int data;
    cin>>data;

    int sum = 0;
    while(data != 0)
    {
        sum += data;

        cout << "Enter an integer(the input ends if it is 0)";
        cin>>data;
    }

    cout<<"The sum is "<<sum<<endl;

    return 0;
}
