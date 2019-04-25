#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 *  code preview: 产生double型随机数：rand() * 2.0 / RAND_MAX //产生0~2.0的随机数
 */

using namespace std;

int main()
{
    const int NUMBER_OF_TRIALS = 1000;//次数，值越大哦精度越大
    int numberOfHits = 0;
    srand(time(0));

    for(int i = 0; i < NUMBER_OF_TRIALS; i++)
    {
        double x = rand() * 2.0 / RAND_MAX -1;
        double y = rand() * 2.0 / RAND_MAX -1;
    if(x * x + y * y <= 1)
        numberOfHits++;
    }

    double PI = 4.0 * numberOfHits / NUMBER_OF_TRIALS;
    cout<<"PI is " << PI << endl;

    cout<< (rand() * 3.0 / RAND_MAX) <<endl;//测试随机数

    return 0;
}
