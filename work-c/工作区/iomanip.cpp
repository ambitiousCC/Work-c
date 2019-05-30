#include <iostream>
#include <iomanip>

using namespace std;

/**
 *  setprecision(n)     保留几位小数
 *  fixed
 *  showpoint           没有小数都显示小数
 *  setw(width)         格式化输出
 *      配套      left
 *                right
 */

int main()
{
    double d = 12.2165;

    cout<<fixed<<setprecision(3)<<d;

    return 0;
}
