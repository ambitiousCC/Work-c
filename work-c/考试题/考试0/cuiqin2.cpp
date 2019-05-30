/**
 *  @Author     崔秦
 *  @Date       2019/3/27
 *  @Version    1.0
 *  @Function   判断输入的是该年的第几天，同时判断是否为闰年。
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
    int year, month, day;
    cin>>year>>month>>day;
    //                 0  1   2   3   4   5   6    7   8  9   10  11  12
    int yearDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;

    if(( 0 == year % 4 && 0 != year % 100) || 0 == year % 400)//leap year
    {
        yearDay[2] += 1;

        for(int i = 0; i < month; i++)
        {
            days += yearDay[i];
        }
        days += day;

        cout<<days;
    }
    else
    {
        for(int i = 0; i < month ; i++)
        {
            days += yearDay[i];
        }
        days += day;

        cout<<days;
    }


    return 0;
}

