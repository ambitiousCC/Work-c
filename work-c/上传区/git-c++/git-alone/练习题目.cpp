/**
 * Author:  崔秦
 * Data:    2019/3/20
 * Version: 1.2
 * Function:计算测试
 */
#include <iostream>
#include <ctime>        //time
#include <cstdlib>      //srand rand

using namespace std;

int main()
{
    int correctCount = 0;//答对的题目个数
    int errorCount = 0;//答错的题目个数
    double correctRate ;//计算正确率
    int count = 0;//总题目
    long startTime = time(0);
    int answer = 0;
    const int NUMBER_OF_QUESTIONS = 10;

    srand(time(0));

    while(count < NUMBER_OF_QUESTIONS)
    {
        //两个随机数字
        int number1 = rand() % 10;
        int number2 = rand() % 10;
        int temp = 0;

        if(number2 > number1)
        {
            temp = number1;
            number1 = number2;
            number2 = temp;
        }

        cout<<"计算一下"<<number1<<"和"<<number2<<"的乘积"<<endl;
        cout<<"你的答案:";
        cin>>answer;

        if(number1 * number2 == answer)
        {
            cout<<"correct"<<endl;
            correctCount++;
        }
        else
        {
            cout<<"error"<<endl;
            errorCount++;
            cout<<"答案应该是:"<<(number1*number2)<<endl;
        }

        count++;
    }

    long endTime = time(0);
    long testTime = endTime - startTime;//计算执行程序所花的时间

    if(testTime>5)
    {
        cout<<"太慢了"<<"你一共花了"<<testTime<<"s"<<endl;
    }

    correctRate = correctCount / count;

    cout<<"正确的个数："<<correctCount<<"正确率是："<<correctRate<<endl;

    return 0;
}
