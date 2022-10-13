/***********************************************************
* file name: Patel_2_3.cpp
* programmer name: Shiv Patel
* date created: 9/03/20
* date of last revision:09/3/2020
* details of the revision: none
* sales tax
**********************************************************/

#include <iostream>
using namespace std;

int main( )
{
    //program description
    cout<<"This program will display the total sales tax on a $95 purchase,\n"
        <<"assuming the State sales tax is 4% and County sales tax is 2%\n\n";

    //variable declaration

    const float Statetax=.04,Countytax=.02;
    double statetax, countytax, Totalamount;



    //calculation
    statetax = Statetax*95;
    countytax = Countytax*95;
    Totalamount = 95 + statetax + countytax;

    //display results
    cout << "Purchase amount: $95.00\n";
    cout << "State Sales tax: $"<< statetax << endl;
    cout << "County Sales tax: $" << countytax << endl;



    cout << "\nThe total purchase amount including tax is: $"<< Totalamount << endl;

    return 0;
}

//sample run
/*
This program will display the total sales tax on a $95 purchase,
assuming the State sales tax is 4% and County sales tax is 2%

Purchase amount: $95.00
State Sales tax: $3.8
County Sales tax: $1.9

The total purchase amount including tax is: $100.7

*/
