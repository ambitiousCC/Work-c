/**
 * @Author      cuiqin
 * @Date        2019/4/10
 * @Version     1.0
 * @Function    judge the position
 */

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main()
 {
     double x1, y1, w1, h1, x2, y2, w2, h2;
     cout<<"Enter r1's center x-, y-coordinates, width, and height: ";
     cin>>x1>>y1>>w1>>h1;
     cout<<"Enter r2's center x-, y-coordinates, width, and height: ";
     cin>>x2>>y2>>w2>>h2;

     double cx = x1 - x2;
     double x = abs(cx);
     double cy = y1 - y2;
     double y = abs(cy);
     double m0 = w1/2 - w2/2;
     double m = abs(m0);
     double n0 = h1/2 - h2/2;
     double n = abs(n0);

     if(m0 * n0 > 0)
     {
         //the second is smaller than the first and they can contain each other
         if(m > 0)
         {
             //second is smaller
             if(x < m && y < n)
             {
                cout<<"r2 is inside r1"<<endl;
             }
             else if(x < m || y < n)
             {
                 cout<<"r2 overlaps r1"<<endl;
             }
             else
             {
                 cout<<"r2 does not overlap r1"<<endl;
             }
         }
         else
         {
             //second is bigger
             if(x < m && y < n)
             {
                cout<<"r1 is inside r2"<<endl;
             }
             else if(x < m || y < n)
             {
                 cout<<"r1 overlaps r2"<<endl;
             }
             else
             {
                 cout<<"r1 does not overlap r2"<<endl;
             }

         }
     }
     else
     {
        //only have the solution of overlapping
        if(m > 0)
        {
            if(x < m && y < n)
            {
                cout<<"r2 overlaps r1"<<endl;
            }
            else
            {
                cout<<"r2 does not overlap r1"<<endl;
            }
        }
        else
        {
            if(x < m && y < n)
            {
                cout<<"r1 overlaps r2"<<endl;
            }
            else
            {
                cout<<"r1 does not overlap r2"<<endl;
            }

        }
     }

     return 0;
 }
