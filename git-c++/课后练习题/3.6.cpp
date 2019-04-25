/**
 *  Author      cuiqin
 *  Date        2019/3/29
 *  Version     1.0
 *  Function    improve the function of count BMI because this increases the feet to inches
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
    double weight, inches, feet;
    cout<<"Enter weight in pounds: ";
    cin>>weight;
    cout<<"Enter feet: ";
    cin>>feet;
    cout<<"Enter inches: ";
    cin>>inches;

    const double poundToKg = 0.45359237;
    const double inchesToM = 0.0254;

    inches += 12 * feet;
    double weights = weight * poundToKg;
    double heights = inches * inchesToM;
    double BMI = weights / pow(heights, 2);

    cout<<"BMI is "<<BMI<<endl;
    if(BMI < 18.5)
    {
        cout<<"Underweight"<<endl;
    }
    else if(BMI < 25)
    {
        cout<<"Normal"<<endl;
    }
    else if(BMI < 30)
    {
        cout<<"Overweight"<<endl;
    }
    else if(BMI < 18.5)
    {
        cout<<"Obese"<<endl;
    }

    return 0;
 }
