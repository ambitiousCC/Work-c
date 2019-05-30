#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter a letter: ";
    char c;
    cin>>c;

    if(isalpha(c))
    {
        if('A'==c||'a'==c||'E'==c||'e'==c||'I'==c||'i'==c||'O'==c||'o'==c)
        {
            cout<<c<<" is a consonant";
        }
        else if('U'==c||'u'==c)
        {
            cout<<c<<" is a vowel";
        }
        else
        {
            cout<<"nether";
        }
    }
    else
    {
        cout<<"is an invalid input";
    }


    return 0;
}
