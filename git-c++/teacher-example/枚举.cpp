// Ã¶¾ÙÀàĞÍ
#include <iostream>

using namespace std;

#define RED 1000

enum spectrum {red=1000, orange, yellow, green, blue, violet, indigo, ultraviolet};

const int red = 1000;

int main()
{
    spectrum band;
    band = blue;
    //band = 2000;

    switch(band)
    {
        case red: cout << "red£º" << red << endl; break;
        case orange: cout << "orange: " << orange << endl; break;
        case yellow: cout << "yellow!" << endl; break;
        case green: cout << "green!" << endl; break;
        case blue: cout << "blue: " << blue << endl; break;
        case violet: cout << "violet!" << endl; break;
        case indigo: cout << "indigo!" << endl; break;
        case ultraviolet: cout << "ultraviolet!" << endl; break;
    }
    return 0;
}
