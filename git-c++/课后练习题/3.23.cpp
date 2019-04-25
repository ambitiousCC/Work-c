/**
 *  @Author     ´ÞÇØ
 *  @Date       2019/4/10
 *  @Version    1.0
 *  @Function   ÅÐ¶ÏµãµÄÎ»ÖÃ
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double x, y;
     cout<<"Enter a point's x- and y-coordinates: ";
     cin>>x>>y;

     if((x >= 0 && x <= 200) && (y >= 0 && y <= 100))
     {
        double num = 2 * y + x - 200;
        if(num <= 0)
        {
            cout<<"The point is in the triangle";
        }
        else
        {
            cout<<"The point is not in the triangle"<<endl;
        }
     }
     else
     {
         cout<<"The point is not in the triangle"<<endl;
     }


     return 0;
 }
