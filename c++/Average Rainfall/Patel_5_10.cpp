/*********************************************************
* file name: Patel_5_10.cpp
* programmer name: Shiv Patel
* date created: 10/5/20
* date of last revision: 10/5/20
* details of the revision: Average Rainfall
* short description: Write a program that collects data and calculates the
 *                   average rainfall over a period of years.
 *                   the program should display the number of months, the
 *                   total inches of rainfall, and teh average per month
 *                   for the entire period
**********************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Program description
    cout << "\nThis program will collect data and calculates";
    cout << "\nthe average rainfall over a period of years.\n";


    //Variable declarations
    int Years, Months=12, TotalMonths=0;
    double Average , TotalRainfall, Rainfall ;

    //Variable initialization
    cout << "\nEnter the amount of years: ";
    cin >> Years;

    if (Years<1){
        cout << "Years cannot be less than 1\n";
        cout << "Enter the amount of years : ";
        cin >> Years;
    }


    //Conditional statement
    for (int Y=0 ; Y < Years ; Y++)
    {
        cout << "\nYear number "<< (Y+1) << ": " << endl;
        cout << "_______________________________\n";
        for (int M=0; M < Months; M++)
        {
            cout << "Inches of rain received for ";
            cout <<"Month " << (M+1)<<" : ";
            cin >> Rainfall;
            if (Rainfall<0)
            {
                cout << "Months cannot be less than 0\n";
                cout << "Inches of rain received for";
                cout <<" Month " << (M+1)<<" : ";
                cin >> Rainfall;
            }

                TotalRainfall += Rainfall;
                TotalMonths++;
        }
    }

    //Calculations
    cout << setprecision(2) << fixed;
    Average = TotalRainfall/TotalMonths;
    cout << "The total amount of months is: " << TotalMonths << endl;
    cout << "The total inches of rainfall is: " << TotalRainfall << endl;
    cout << "The Average rainfall per month is: " << Average << endl;

return 0;
}


/******
OUTPUT 1

"/Users/shiv0248/Desktop/cmpsc 121/untitled16/cmake-build-debug/untitled16"

This program will collect data and calculates
the average rainfall over a period of years.

Enter the amount of years: 2

Year number 1:
_______________________________
Inches of rain received for Month 1 : 1
Inches of rain received for Month 2 : 2
Inches of rain received for Month 3 : 3
Inches of rain received for Month 4 : 4
Inches of rain received for Month 5 : 5
Inches of rain received for Month 6 : 6
Inches of rain received for Month 7 : 7
Inches of rain received for Month 8 : 8
Inches of rain received for Month 9 : 9
Inches of rain received for Month 10 : 10
Inches of rain received for Month 11 : 11
Inches of rain received for Month 12 : 12

Year number 2:
_______________________________
Inches of rain received for Month 1 : 12
Inches of rain received for Month 2 : 11
Inches of rain received for Month 3 : 10
Inches of rain received for Month 4 : 9
Inches of rain received for Month 5 : 8
Inches of rain received for Month 6 : 7
Inches of rain received for Month 7 : 6
Inches of rain received for Month 8 : 5
Inches of rain received for Month 9 : 4
Inches of rain received for Month 10 : 3
Inches of rain received for Month 11 : 2
Inches of rain received for Month 12 : 1
The total amount of months is: 24
The total inches of rainfall is: 156.00
The Average rainfall per month is: 6.50

Process finished with exit code 0


OUTPUT 2
"/Users/shiv0248/Desktop/cmpsc 121/untitled16/cmake-build-debug/untitled16"

This program will collect data and calculates
the average rainfall over a period of years.

Enter the amount of years: 0
Years cannot be less than 1
Enter the amount of years : 1

Year number 1:
_______________________________
Inches of rain received for Month 1 : -1
Months cannot be less than 0
Inches of rain received for Month 1 : 1
Inches of rain received for Month 2 : 3
Inches of rain received for Month 3 : 5
Inches of rain received for Month 4 : 7
Inches of rain received for Month 5 : 9
Inches of rain received for Month 6 : 2
Inches of rain received for Month 7 : 4
Inches of rain received for Month 8 : 6
Inches of rain received for Month 9 : 8
Inches of rain received for Month 10 : 10
Inches of rain received for Month 11 : 12
Inches of rain received for Month 12 : 13
The total amount of months is: 12
The total inches of rainfall is: 80.00
The Average rainfall per month is: 6.67

Process finished with exit code 0

*/