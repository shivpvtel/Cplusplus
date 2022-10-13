/***********************************************************
* file name: Patel_2_4.cpp
* programmer name: Shiv Patel
* date created: 9/03/20
* date of last revision:09/3/2020
* details of the revision: restaurant bill with tip and tax
* sales tax
**********************************************************/

#include <iostream>
using namespace std;

int main( )
{
    //program description
    cout<<"This program will display the total dollar amount of a restaurant bill plus tax and tip.\n";
    cout << "Assuming the total is $88.67.\n";
    cout << "The tax is 6.75% and amount of tip left is 20%\n\n";
    cout << "Bill description:\n";
   
    
    //variable declaration
    const float tax=.0675, tip=.20;
    double Tax, Tip, Taxtotal, Totalamount;

    //calculation
    Tax = tax*88.67;
    Taxtotal = 88.67 + Tax;
    Tip = Taxtotal*tip;
    Totalamount = Tip+Taxtotal;

    //display results
    cout << "Meal cost: $88.67\n";
    cout << "Tax amount is: $"<< Tax << endl;
    cout << "Tax amount plus the meal is: $"<< Taxtotal << endl;
    cout << "Tip amount is: $" << Tip << endl;
    cout << "Total bill: $"<< Totalamount << endl;

    return 0;
}

//sample run
/*
This program will display the total dollar amount of a restaurant bill plus tax and tip.
Assuming the total is $88.67.
The tax is 6.75% and amount of tip left is 20%

Bill description:
Meal cost: $88.67
Tax amount is: $5.98523
Tax amount plus the meal is: $94.6552
Tip amount is: $18.931
Total bill: $113.586

*/
