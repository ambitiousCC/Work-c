/**
 *  @Author     ¥ﬁ«ÿ
 *  @Date       2019/4/10
 *  @Version    1.0
 *  @Function   º∆À„Ωπµ„
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double x1, y1, x2, y2, x3, y3, x4, y4, x, y;
     cout<<"Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
     cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

     double a, b, c, d, e, f;
     a = y1 - y2;
     b = x2 - x1;
     e = (y1 - y2) * x1 - (x1 - x2) * y1;
     c = y3 - y4;
     d = x4 - x3;
     f = (y3 - y4) * x1 - (x3 - x4) * y3;


    if(0 == a * d - b * c)
    {
        cout<<"The equation has no solution"<<endl;
    }
    else
    {
        x = (e*d - b*f) / (a*d - b*f);
        y = (a*f - e*c) / (a*d - b*c);
        cout<<"The intersecting point is at ( "<<x<<", "<<y<<" )";
    }

     return 0;
 }
