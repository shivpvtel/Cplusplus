/*********************************************************
* file name: patel_3_23.cpp
* programmer name: Shiv Patel
* date created: 9/19/20
* date of last revision: 9/19/20
* details of the revision: Stock Transaction
* short description: Last month Joe purchased some stock in Acme Software, Inc.
                     Here are some details:
                        - the number of shares bought = 1000
                        - stock price when bought = $45.50
                        - paid 2% of the amount to a stockbroker as commission
                      Two weeks later he sold the stock, here are some details:
                        - share sold: 1000
                        - each priced at: $56.90
                        - paid 2% of the amount to a stockbroker as commission
                      Program will display:
                        - the amount joe paid for the stock
                        - amount of commission paid, first time around
                        - the amount joe sold the stock for
                        - amount of commission paid, second time around
                        - total profit joe made after selling the stock
                          and paying commission twice.
**********************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Program description
    cout << "\nLast month's financial description of Joe's stock transaction with Acme Software, Inc:\n";



    //variables
    const float AmountPaidForStock = 45.50, AmountStockSoldfor = 56.90, Commission = 0.02;
    const int SharesBought = 1000;
    float Purchasetotal, Sellingtotal, Profits, CommissionPaid1, CommissionPaid2;


    //calculations

    Purchasetotal=AmountPaidForStock*SharesBought;
    Sellingtotal=AmountStockSoldfor*SharesBought;


    CommissionPaid1= Purchasetotal*Commission;
    CommissionPaid2= Sellingtotal*Commission;

    Profits= Sellingtotal-Purchasetotal-CommissionPaid1-CommissionPaid2 ;


    //Results

    cout << setprecision(2)<<fixed<<endl;


    cout << "Joe bought "<< SharesBought <<" shares when they were $"<< AmountPaidForStock << " each,";
    cout << " totalling $" << Purchasetotal;
    cout << "\nHe paid the stock broker 2% of his total purchase, equalling $" << CommissionPaid1;
    cout << "\n\nTwo weeks later....\n\n";
    cout << "Joe Sold "<< SharesBought <<" shares at $" << AmountStockSoldfor;
    cout << " totalling $" << Sellingtotal << endl;
    cout << "He paid the stock broker 2% of his total sell, equalling $" << CommissionPaid2;
    cout << "\nThe total Profit made in this transaction $" << Profits<<endl;


    return 0;

}
/*output
"/Users/shiv0248/Desktop/cmpsc 121/untitled13/cmake-build-debug/untitled13"

Last month's financial description of Joe's stock transaction with Acme Software, Inc:

Joe bought 1000 shares when they were $45.50 each, totalling $45500.00
He paid the stock broker 2% of his total purchase, equalling $910.00

Two weeks later....

Joe Sold 1000 shares at $56.90 totalling $56900.00
He paid the stock broker 2% of his total sell, equalling $1138.00
The total Profit made in this transaction $9352.00

Process finished with exit code 0

 */