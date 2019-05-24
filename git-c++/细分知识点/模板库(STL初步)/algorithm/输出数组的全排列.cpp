#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    char a[5] = {'!','@','%','^','5'};
    do{
        printf("%c %c %c %c %c\n",a[0],a[1],a[2],a[3],a[4]);
    } while(next_permutation(a,a+5));

    return 0;
}
