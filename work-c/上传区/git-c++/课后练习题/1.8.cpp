/**
 * Author   崔秦
 * Date     2019/3/22
 * Version  1.0
 * Function 计算周长和面积
 */

#include <iostream>

using namespace std;

float perimeter(float r)
{
    return 2*r*PI
}

float area(float r)
{
    return r*r*PI
}

int main()
{
    cout<<perimeter(5.5)<<endl;
    cout<<area(5.5)<<endl;

    return 0;
}
