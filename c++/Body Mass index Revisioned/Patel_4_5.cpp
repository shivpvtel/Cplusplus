/*********************************************************
* file name: Patel_4_5.cpp
* programmer name: Shiv Patel
* date created: 9/23/20
* date of last revision: 9/23/20
* details of the revision: Body Mass Index
* short description: Write a Program that calculates and displays a person's
                     body mass index. The BMI is used to determine if someone
                     is overweight or not and is calculated by the following
                     BMI= weight(pounds) x 703 / height^2 (inches)
                     If a person's BMI is 18.5-25 their weight is optimal
                     If its less than 18.5, they are underweight.
                     If its greater than 25, they are overweight.
**********************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Program description
    cout << "\nLets calculate your Body mass Index!\n";


    //variables
    int BMI, Height, Weight;

    //Inputs
    cout << "Enter your height in inches (example 68): ";
    cin >> Height;
    cout << "Enter your weight in pounds (example 180): ";
    cin >> Weight;

    //calculations
    BMI = Weight * 703/pow(Height,2);


    //Results

    cout << setprecision(2)<<fixed<<endl;
    cout << "Your height is " << Height << " inches" << endl;
    cout << "Your weight is " << Weight << " pounds." << endl;
    cout << "Your BMI is " << BMI << ".\n";

    if (BMI<18.5)
    {
        cout << "You are underweight.";
    }
    else if (BMI<25)
    {
        cout << "Your weight is considered to be optimal.";
    }
    else if (BMI>25)
    {
        cout << "You are overweight.";
    }



    return 0;

}
/*output


 * 1

 "/Users/shiv0248/Desktop/cmpsc 121/bodymassindex/cmake-build-debug/bodymassindex"

Lets calculate your Body mass Index!
Enter your height in inches (example 68): 68
Enter your weight in pounds (example 180): 185

Your height is 68 inches
Your weight is 185 pounds.
Your BMI is 28.
You are overweight.
Process finished with exit code 0

 * 2

 "/Users/shiv0248/Desktop/cmpsc 121/bodymassindex/cmake-build-debug/bodymassindex"

Lets calculate your Body mass Index!
Enter your height in inches (example 68): 68
Enter your weight in pounds (example 180): 150

Your height is 68 inches
Your weight is 150 pounds.
Your BMI is 22.
Your weight is considered to be optimal.
Process finished with exit code 0


 * 3

 "/Users/shiv0248/Desktop/cmpsc 121/bodymassindex/cmake-build-debug/bodymassindex"

Lets calculate your Body mass Index!
Enter your height in inches (example 68): 55
Enter your weight in pounds (example 180): 24

Your height is 55 inches
Your weight is 24 pounds.
Your BMI is 5.
You are underweight.
Process finished with exit code 0



 */
