#include <iostream>

using namespace std;

int main()
{
    int day = 0;
    char answer;

    cout<<"Is your birthday in Set1?"<<endl;
    cout<<"1 3 5 7"<<endl;
    cout<<"9 11 13 15"<<endl;
    cout<<"17 19 21 23"<<endl;
    cout<<"25 27 29 31"<<endl;
    cout<<"Enter N/n for No and Y/y for Yes: ";
    cin>>answer;

    if(answer == 'y' || answer == 'Y')
        day ++;

    cout<<"Is your birthday in Set2?"<<endl;
    cout<<"2 3 6 7"<<endl;
    cout<<"10 11 14 15"<<endl;
    cout<<"18 19 22 23"<<endl;
    cout<<"26 27 30 31"<<endl;
    cout<<"Enter N/n for No and Y/y for Yes: ";
    cin>>answer;

    if(answer == 'y' || answer == 'Y')
        day +=2;

    cout<<"Is your birthday in Set1?"<<endl;
    cout<<"4 5 6 7"<<endl;
    cout<<"12 13 14 15"<<endl;
    cout<<"20 21 22 23"<<endl;
    cout<<"28 29 30 31"<<endl;
    cout<<"Enter N/n for No and Y/y for Yes: ";
    cin>>answer;

    if(answer == 'y' || answer == 'Y')
        day +=4;

    cout<<"Is your birthday in Set1?"<<endl;
    cout<<"8 9 10 11"<<endl;
    cout<<"12 13 14 15"<<endl;
    cout<<"24 25 26 27"<<endl;
    cout<<"28 29 30 31"<<endl;
    cout<<"Enter N/n for No and Y/y for Yes: ";
    cin>>answer;

    if(answer == 'y' || answer == 'Y')
        day +=8;

    cout<<"Is your birthday in Set1?"<<endl;
    cout<<"16 17 18 19"<<endl;
    cout<<"20 21 22 23"<<endl;
    cout<<"24 25 26 27"<<endl;
    cout<<"28 29 30 31"<<endl;
    cout<<"Enter N/n for No and Y/y for Yes: ";
    cin>>answer;

    if(answer == 'y' || answer == 'Y')
        day +=16;

    cout<<"Your birthday is "<< day << endl;
    return 0;
}
