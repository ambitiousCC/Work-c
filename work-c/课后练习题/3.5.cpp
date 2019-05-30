/**
 *  Author      cuiqin
 *  Date        2019/3/29
 *  Version     1.0
 *  Function    count out the week and after day's
 */

 #include <iostream>

 using namespace std;

int main()
{
    int today, After;
    cout<<"Enter today's day: ";
    cin>>today;
    cout<<"Enter the number of days elapsed since today: ";
    cin>>After;

    string Weeks[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int left = (today + After) % 7;

    cout<<"Today is "<<Weeks[today]<<" and the future day is "<<Weeks[left];

    return 0;
}
