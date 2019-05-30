/**
 *	@Author		cuiqin
 *	@Version	1.0
 *	@Date		2019/4/12
 *	@Function	judge the point's position about the line
 */

#include <iostream>

using namespace std;

int main()
{
	double x0, y0, x1, y1, x2, y2;
	cout<<"Enter three pointer for p0, p1, and p2: ";
	cin>>x0>>y0>>x1>>y1>>x2>>y2;

	double alpha = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);

	if(alpha > 0)
		cout<<"p2 is on the left side of the line"<<endl;
	else if(alpha < 0)
		cout<<"p2 is on the same line"<<endl;
	else
		cout<<"p2 is on the right of the line"<<endl;

	return 0;
}
