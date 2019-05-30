#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cout<<"Enter point 1 (x1, y1) in degree: ";
    cin>>x1>>y1;
    cout<<"Enter point 2 (x2, y2) in degree: ";
    cin>>x2>>y2;

    double r = 6378.1;

    double d = r * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));

    cout<<"The distance between the two points is "<<d<<endl;

    return 0;
}
