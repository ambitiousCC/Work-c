//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, s;
    cout<<"Enter the number of sides: ";
    cin>>n;
    cout<<"Enter the side: ";
    cin>>s;

    double PI = 3.14159;
    double area = (n * s * s) / (4 * tan(PI / n));


    cout<<"The area of the polygon is "<<fixed<<setprecision(2)<<area<<endl;

    return 0;
}
