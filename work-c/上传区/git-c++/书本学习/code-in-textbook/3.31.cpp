#include <iostream>

using namespace std;

int main()
{
    double x0, y0, x1, y1, x2, y2;
    cout<<"Enter three points for p0, p1,p2: ";
    cin>>x0>>y0>>x1>>y1>>x2>>y2;

    double del = (x0 - x1) * (y2 - y0) - (y0 - y1) * (x2 - x0);

    if(del == 0)
        cout<<"on the line";
    else
        cout<<"not on the line";

    return 0;
}
