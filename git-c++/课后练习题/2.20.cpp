/**
 *  Author      ¥ﬁ«ÿ
 *  Date        2019/3/25
 *  Version     1.0
 *  Function    º∆À„–±¬ 
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double x1, y1, x2, y2;
    cout<<"Enter the coordinates for two points: ";
    cin>>x1>>y1>>x2>>y2;

    double k = (y2 - y1) / (x2 - x1);

    cout<<"The slope for the line that connects two points ("<<x1<<" , "<<y1<<" ) and ("<<x2<<" , "<<y2<<")"<<" is "<<k;

    return 0;
 }
