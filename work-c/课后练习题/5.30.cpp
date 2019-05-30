#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int year, week;
	cin>>year>>week;

	string month[13] = {"","January","February","March","April","May","June","July","August","September","October","November","December"};
	string weeks[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int monthss[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((0==year%4&&0!=year%100)||0==year%400)
		months[3]++;

	//存储每个月第一天的星期
    int w[12];
    int s = 0;
    for(int i = 0; i < 12; i++)
    {
        s += monthss[i];
        w[i] = (s%7 + week)%7;
    }


	int sum = 0;
	int weekday = 0;
	int ii;
	for(int i = 1; i <= 12; i++)
	{
	    ii = i;
		cout<<right;
		cout<<setw(20)<<month[i]<<" "<<year<<endl;

		for(int l = 0; l < 35; l++)
			cout<<"-";

		cout<<endl;

		cout<<left;
		for(int j = 0; j < 7; j++)
			cout<<setw(5)<<weeks[j];

		cout<<endl;




		for(int k = 1; k <= months[i-1]; k++) {
			sum++;
			weekday = (sum % 7 + week) % 7;
			//第一天应该对其上个月月末
			if(k==1)
                for(int i = 0; i < w[ii-1]; i++)
                    cout<<setw(5)<<" ";
			if(weekday!=0)
				cout<<setw(5)<<k;
			else
				cout<<setw(5)<<k<<endl;
		}

		cout<<endl;
	}

	return 0;
}
