/**
 *  @Author     cuiqin
 *  @Date       2019/4/10
 *  @Version    1.0
 *  @Function   圆与圆的位置关系
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, r1, x2, y2, r2;
    cout<<"Enter circle's center x-, y-coordinates, and radius: ";
    cin>>x1>>y1>>r1;
    cout<<"Enter circle's center x-, y-coordinates, and radius: ";
    cin>>x2>>y2>>r2;


    //the distance of circle point
    double d = pow((pow((x1-x2),2) + pow((y1-y2),2)),0.5);

    if(r1 > r2)
    {
        // there are three position
        //inside
        if(d < (r1 - r2))
        {
            cout<<"circle2 is inside circle1"<<endl;
        }
        else if(d < (r1 + r2))
        {
            cout<<"circle2 overlaps circle1"<<endl;
        }
        else
        {
            cout<<"circle2 does not overlap circle1"<<endl;
        }
    }
    else if(r1 < r2)
    {// there are three position
        //inside
        if(d < (r2 - r1))
        {
            cout<<"circle1 is inside circle2"<<endl;
        }
        else if(d < (r2 + r1))
        {
            cout<<"circle1 overlaps circle2"<<endl;
        }
        else
        {
            cout<<"circle1 does not overlaps circle2"<<endl;
        }

    }
    else
    {// there are three position
        //inside
        if(d < (r1 + r2))
        {
            cout<<"circle1 overlaps circle2"<<endl;
        }
        else
        {
            cout<<"Both of them are not contain each other"<<endl;
        }

    }



    return 0;
}
