/**
 *  @Author     崔秦
 *  @Date       2019/3/27
 *  @Version    1.0
 *  @Function   输出和和平均值，并保留两位小数
 *
 *   *     ***  *       * ****    *   *  ***  *   *   **
 *   *    *   *  *     *  *        * *  *   * *   *   **
 *   *    *   *   *   *   ****      *   *   * *   *   **
 *   *    *   *    * *    *         *   *   * *   *
 *   ****  ***      *     ****      *    ***   ***    **
 */

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int x, y, z;
    cin>>x>>y>>z;

    int sum = x + y + z;
    double average = sum / 3.0;

    cout<<sum<<endl;
    cout<<fixed<<setprecision(2)<<average;

    return 0;
}

