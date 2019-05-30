#include <vector>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

//need to define a function to descripe the action of addition
using namespace std;
int jianfa();
int main()
{
	//part1 numberarray
	string a, b;
	cin>>a>>b;

	int aLen = a.length(),
        bLen = b.length();

    int num1[aLen],
        num2[bLen];
    //
    for(int i = 0; i < aLen; i++)
    {
        switch(a[i])
        {
        case '0':
            num1[i] = 0;
            break;
        case '1':
            num1[i] = 1;
            break;
        case '2':
            num1[i] = 2;
            break;
        case '3':
            num1[i] = 3;
            break;
        case '4':
            num1[i] = 4;
            break;
        case '5':
            num1[i] = 5;
            break;
        case '6':
            num1[i] = 6;
            break;
        case '7':
            num1[i] = 7;
            break;
        case '8':
            num1[i] = 8;
            break;
        case '9':
            num1[i] = 9;
            break;
        }
    }
    for(int i = 0; i < bLen; i++)
    {
        switch(b[i])
        {
        case '0':
            num2[i] = 0;
            break;
        case '1':
            num2[i] = 1;
            break;
        case '2':
            num2[i] = 2;
            break;
        case '3':
            num2[i] = 3;
            break;
        case '4':
            num2[i] = 4;
            break;
        case '5':
            num2[i] = 5;
            break;
        case '6':
            num2[i] = 6;
            break;
        case '7':
            num2[i] = 7;
            break;
        case '8':
            num2[i] = 8;
            break;
        case '9':
            num2[i] = 9;
            break;
        }
    }

    //part2
    int origin = 0;
    int locationa, locationb;
    for(int i = 0; i < aLen; i++)
    {
        if(num1[i]!=0)
        {
            locationa = i;
            break;
        }
    }
    for(int i = 0; i < bLen; i++)
    {

        if(num2[i]!=0)
        {
            locationb = i;
            break;
        }
    }
    int n1Len = aLen - locationa;
    int n2Len = bLen - locationb;

    int n1[n1Len],
        n2[n2Len];

    for(int i = 0; i < n1Len; i++)
    {
        n1[i] = num1[locationa+i];
    }
    for(int i = 0; i < n2Len; i++)
    {
        n2[i] = num2[locationb+i];
    }

    //part3
    vector<int> v1;
    vector<int>::iterator it;

    if(n1Len>=n2Len)
    {
        for(int i = n2Len-1; i>0; i--)
        {
            int c1 = n1[i] - n2[i];
            if(c1<0)
            {
                c1 += 10;
                n1[i-1]--;
            }
            v1.push_back(c1);
        }
        for(it=v1.begin();it!=v1.end();it++)
            cout<<*it;
    } else {
        for(int i = n1Len-1; i>0; i--)
        {
            int c1 = n2[i] - n1[i];
            if(c1<0)
            {
                c1 += 10;
                n1[i-1]--;
            }
            v1.push_back(c1);
        }
        cout<<"-";
        for(it=v1.begin();it!=v1.end();it++)
            cout<<*it;
    }
    return 0;
}
