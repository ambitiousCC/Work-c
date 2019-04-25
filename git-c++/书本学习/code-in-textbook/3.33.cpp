#include <iostream>
using namespace std;

int main()
{
    int year, month, day;
    cout<<"Enter year: (e.g., 2012): ";
    cin>>year;
    cout<<"Enter month: 1-12:";
    cin>>month;
    cout<<"Enter the day of the month: ";
    cin>>day;

    //数学公式
    string week[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int k = year % 100;
    int j = year / 100;
    int h = (day + 26 * (month + 1)/10 + k + k/4 + j/4 + 5*j) % 7;

    cout<<"is "<<week[h]<<endl;

    return 0;
}
