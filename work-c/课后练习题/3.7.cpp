/**
 *  Author      cuiqin
 *  Date        2019/3/29
 *  Version     1.0
 *  Function    non-decreasing order sort
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter three integers: ";
    cin>>a>>b>>c;

    int temp1, temp2, temp3;
    if(a > b)
    {
        temp1 = a;
        a = b;
        b = temp1;
    }
    if(b > c)
    {
        temp2 = b;
        b = c;
        c = temp2;
    }
    if(a > b)//important!!
    {
        temp1 = a;
        a = b;
        b = temp1;
    }

    cout<<"non-decreasing order sort: "<<a<<","<<b<<","<<c;

    return 0;
}
