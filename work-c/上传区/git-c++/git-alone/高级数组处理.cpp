/**
 *  @Author     崔秦
 *  @Date       2019/4/10
 *  @Version    1.0
 *  @Function   一维数组整型 返回：最大值，次大值，最小值，次小值，中间值可能有两个，以及各自对应索引值
 */

#include <iostream>

using namespace std;

struct variable
{
    int max;
    int min;
    int imax;
    int imin;
    int med1;
    int med2;
    int maxIndex;
    int minIndex;
    int imaxIndex;
    int iminIndex;
    int med1Index;
    int med2Index;
};
//only one function
void key(int array[], int length, variable &v);
void PrintArray(int array[], int length, variable &v);

int main()
{
    int N;
    cout<<"Enter the length of array: ";
    cin>>N;

    int numbers[N];
    cout<<"Enter the numbers of array: ";
    for(int i = 0; i < N; i++)
    {
        cin>>numbers[i];
    }

    for(int i = 0; i < N; i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;



    variable v;

    //invoke the function
    key(numbers, N, v);
    PrintArray(numbers, N, v);

    return 0;
}

void key(int array[], int length, variable &v)
{
    int *newArray = new int [length];
    for(int i = 0; i < length ; i++)
        newArray[i] = array[i];

    //sort
    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j < length; j++)
        {
            if(array[i]<array[j])
            {
                int temp;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    v.max = array[0];
    v.imax = array[1];
    v.min = array[length-1];
    v.imin = array[length-2];
    if(0 == length % 2)
    {
        v.med1 = array[length/2 - 1];
        v.med2 = array[length/2];
    }
    else
    {
        v.med1 = v.med2 = array[(length-1)/2];
    }

    for(int i = 0; i < length; i++)
    {
        if(newArray[i] == v.max)
            v.maxIndex = i;
        if(newArray[i] == v.imax)
            v.imaxIndex = i;
        if(newArray[i] == v.min)
            v.minIndex = i;
        if(newArray[i] == v.imin)
            v.iminIndex = i;
        if(newArray[i] == v.med1)
            v.med1Index = i;
        if(newArray[i] == v.med2)
            v.med2Index = i;
    }
}
void PrintArray(int array[], int length, variable &v)
{
    cout<<"max="<<v.max<<endl;
    cout<<"min="<<v.min<<endl;
    cout<<"imax="<<v.imax<<endl;
    cout<<"imin="<<v.imin<<endl;
    cout<<"med1="<<v.med1<<endl;
    cout<<"med2="<<v.med2<<endl;
    cout<<"maxIndex="<<v.maxIndex<<endl;
    cout<<"minIndex="<<v.minIndex<<endl;
    cout<<"imaxIndex="<<v.imaxIndex<<endl;
    cout<<"iminIndex="<<v.iminIndex<<endl;
    cout<<"med1Index="<<v.med1Index<<endl;
    cout<<"med2Index="<<v.med2Index<<endl;
}
