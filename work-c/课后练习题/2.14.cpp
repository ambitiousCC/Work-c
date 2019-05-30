/**
 *  Author      崔秦
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    输入体重和身高计算BMI
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    float pounds, inches;
    cout<<"Enter weight in pounds: ";
    cin>>pounds;
    cout<<"Enter height in inches: ";
    cin>>inches;


    double kilograms = 0.45359237 * pounds;
    double meters = 0.0254 * inches;
    double BMI = kilograms / (meters * meters);


    cout<<"BMI is "<<BMI<<endl;


    return 0;
 }
