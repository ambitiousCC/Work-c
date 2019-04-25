/**
 *	@Author		cuiqin
 *	@Version	1.0
 *	@Date		2019/4/12
 *	@Function	judge the package
 */

#include <iostream>

using namespace std;

int main()
{
	double w1, p1, w2, p2;
	cout<<"Enter weight and price for package 1: ";
	cin>>w1>>p1;
	cout<<"Enter weight and price for package 2: ";
	cin>>w2>>p2;

	double mainJudge = (w1 / p1) / (w2 / p2);
	cout<<mainJudge<<endl;

	if(mainJudge > 1)
		cout<<"Package 1 has a better price"<<endl;
	else if( mainJudge == 1)
		cout<<"Two package have the same price";
	else
		cout<<"Package 2 has a better price"<<endl;

	return 0;

}
