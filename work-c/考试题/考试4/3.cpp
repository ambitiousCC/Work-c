#include <iostream>

using namespace std;
int loop(int x);

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    for(int i = 0; i < 100;i++)
    {
        if(nums[i]>num1 && nums[i]<num2)
        {
            cout<<nums[i]<<endl;
        }
    }

    return 0;
}
