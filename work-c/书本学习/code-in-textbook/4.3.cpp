#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double side;
    cout<<"Enter the side: ";
    cin>>side;

    double PI = 3.1415;

    double s = (6 * side * side) / (4 * tan(PI/6));

    cout<<"The area of the hexagon is "<<fixed<<setprecision(2)<<s;
    return 0;
}
