//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double PI = 3.1415;
    double vertax;
    cout<<"Enter the length from the center to a vertex: ";
    cin>>vertax;

    double s = 2 * vertax * sin(PI/5);

    double area = (5 * s * s)/(4 * tan(PI/5));

    cout<<"The area of the pentagon is "<<fixed<<setprecision(2)<<area;

    return 0;
}
