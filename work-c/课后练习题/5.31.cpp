#include <iostream>
#include <string>

using namespace std;

int main()
{
	int year, week;
	cin>>year>>week;

	string month[13] = {"","January","February","March","April","May","June","July",
		"August","September","October","November","December"}; 
	string weeks[8] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int months[13] = {0,0,31,28,31,30,31,30,31,31,30,31,30};
	if((0==year%4&&0!=year%100)||0==year%400)
		months[3]++;

	int sum = 0;
	int weekday = 0;
	for(int i = 1; i <= 12; i++)
	{
		sum += months[i];
		weekday = (sum % 7 + week) % 7;
		cout<<month[i]<<" 1, "<<year<<" is "<<weeks[weekday]<<endl;
	}		

	return 0;
}