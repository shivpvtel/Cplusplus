/*********************************************************
* file name: Patel_6_1.cpp
* programmer name: Shiv Patel
* date created: 10/22/20
* date of last revision: 10/22/20
* details of the revision: Markup price
* short description: write a program that calculates markup prices
                   for a wholesale company
**********************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double, double);
double Input(double);

int main()
{
    // Program description
    cout << "\n\nThis program will calculate and display\n"
         <<  "the new retail price after it's markup \npercentage.\n\n";

    //variables
    double CostWholesale,Markup,NewPrice;

    //Inputs
    cout << "Enter item's wholesale cost: ";
    CostWholesale = Input(CostWholesale);

    cout << "Enter it's markup percentage: ";
    Markup = Input(Markup) * .01;

    //calculations
    NewPrice = calculateRetail(CostWholesale, Markup);

    //Results
    cout << setprecision(2) << fixed;
    cout << "Markup percentage is " << (Markup / .01) << "%" << endl;
    cout << "Wholesale cost is $" << CostWholesale << endl;
    cout  << "Retail price is $" << NewPrice << endl;

    return 0;
}
//functions
double calculateRetail(double num1, double num2)
{
    return (num1 * num2) + num1;
}

double Input(double num)
{
    while(!(cin >> num) || (num < 0))
    {
        cout << "Error. Input needs to be over 0: ";
    }
    return num;
}



/*
 *
 * "/Users/shiv0248/Desktop/cmpsc 121/6.1 markup/cmake-build-debug/6_1_markup"


This program will calculate and display
the new retail price after it's markup
percentage.

Enter item's wholesale cost: 10
Enter it's markup percentage: 20
Markup percentage is 20.00%
Wholesale cost is $10.00
Retail price is $12.00

Process finished with exit code 0


 "/Users/shiv0248/Desktop/cmpsc 121/6.1 markup/cmake-build-debug/6_1_markup"


This program will calculate and display
the new retail price after it's markup
percentage.

Enter item's wholesale cost: -10
Error. Input needs to be over 0: 40
Enter it's markup percentage: 45
Markup percentage is 45.00%
Wholesale cost is $30.00
Retail price is $43.50

Process finished with exit code 0


 "/Users/shiv0248/Desktop/cmpsc 121/6.1 markup/cmake-build-debug/6_1_markup"


This program will calculate and display
the new retail price after it's markup
percentage.

Enter item's wholesale cost: 40
Enter it's markup percentage: -20
Error. Input needs to be over 0: 20
Markup percentage is 20.00%
Wholesale cost is $40.00
Retail price is $48.00

Process finished with exit code 0
 */