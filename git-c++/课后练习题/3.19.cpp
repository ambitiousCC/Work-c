/**
 *  @Author     崔秦
 *  @Date       2019/4/3
 *  @Version    1.0
 *  @Function   判断点在矩形的相对位置
 */

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main()
 {
     float x, y, width, height;
     cout<<"Enter the rectangle's width and height: ";
     cin>>width>>height;
     cout<<"Enter the point's x and y: ";
     cin>>x>>y;

     if(abs(x) < width/2 && abs(y) < height/2 )
     {

         cout<<"The point ( "<<x<<", "<<y<<" ) is inside the rectangle. ";
     }
     else if(abs(x) == width/2 && abs(y) == height/2)
     {

         cout<<"The point ( "<<x<<", "<<y<<" ) is on the rectangle. ";
     }
     else
     {
         cout<<"The point ( "<<x<<", "<<y<<" ) is outside the rectangle. ";
     }


     return 0;
 }
