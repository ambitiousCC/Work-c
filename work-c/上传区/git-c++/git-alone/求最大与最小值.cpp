/**
 *  Author:     崔秦
 *  function:   求输入的数字的最大与最小值
 *  weakness:   需要定义输入数字的长度
 *  version:    1.0
 */

 #include <iostream>

 using namespace std;

 int main()
{
    int N,nums;
    cin>>N;
    cout<<"输入N个数:"<<endl;

    int max = -999;
    int min = 999;

    for(int i = 0;i<N;i++)
    {
        cin>>nums;
        if(nums>max)
        {
            max = nums;
        }
        if(nums<min)
        {
            min = nums;
        }
    }
    cout<<max<<" "<<min<<endl;

    return 0;
}
