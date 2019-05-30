#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cout<<"Enter the coordinates for two points: ";
    cin>>x1>>y1>>x2>>y2;

    if(x1 == x2)
    {
        cout<<"is x="<<x1<<endl;
    }
    else if(y1 == y2)
    {
        cout<<"is y="<<y1<<endl;
    }
    else
    {
        double m = (y2 - y1) / (x2 - x1);
        double b = y1 - m * x1;
        if(b!=0)
        {
            cout<<"is y="<<m<<"x + "<<b<<endl;
        }
        else
        {
            cout<<"is y="<<m<<"x"<<endl;
        }
    }



    return 0;
}
