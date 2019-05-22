#include <iostream>
#include <cstdio>
#include <string>
#include <typeinfo>

using namespace std;
int main() {
    int a = 0;
    cout<<typeid(a).name()<<endl;
    return 0;
}
