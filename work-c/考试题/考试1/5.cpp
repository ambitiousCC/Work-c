#include <iostream>

using namespace std;
void isPrime(int num);
void printPrime(int len);

int main()
{
    int a, n;
    cin>>a>>n;

    int line = n / 8;

    isPrime(a);

    printPrime(line);

    return 0;
}

void isPrime(int num)
{
    for(int i = num ; i < 1000; i++)
    {
        for(int j = 0; j < i ; j++)
        {
            if(i % j == 0 && j != 1)
            {
                break;
            }
            else
            {

            }
        }
    }
}

void printPrime(int line)
{

}
