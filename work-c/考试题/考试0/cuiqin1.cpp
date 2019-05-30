/**
 *  @Author     崔秦
 *  @Date       2019/3/27
 *  @Version    1.0
 *  @Function   输出最大值和最小值
 *
 *   *     ***  *       * ****    *   *  ***  *   *   **
 *   *    *   *  *     *  *        * *  *   * *   *   **
 *   *    *   *   *   *   ****      *   *   * *   *   **
 *   *    *   *    * *    *         *   *   * *   *
 *   ****  ***      *     ****      *    ***   ***    **
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int newArr[N];

    for(int i = 0; i<N; i++)
    {
        cin>>newArr[i];
    }

    int max = -999;
    int min = 999;

    for(int i = 0; i<N; i++)
    {
        if(newArr[i] > max)
            max = newArr[i];
        if(newArr[i] < min)
            min = newArr[i];
    }

    cout<<max<<" "<<min;

    return 0;
}
