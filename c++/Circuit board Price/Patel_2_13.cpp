/*********************************************************
* file name: patel_2_12.cpp
* programmer name: Shiv Patel
* date created: 9/9/20
* date of last revision: 9/9/20
* details of the revision: Circuit Board Price
* short description: An electronic company sells circuit boards at a 35% profit.
                      Write a program that will calculate the selling price of
                      a circuit board that costs $14.95. Display the results on
                      the screen
**********************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Program description
    cout << "\n\nThis program will calculate and display" <<endl
         << "the selling price of a company's product. It will also allow you to \n"
            "check to see how much the company is profiting off of your items. \n\n";

    // Declaring the variables: types and names
    const double bought=14.95, profit=0.35;
    int sold, price, input, total;


    // Calculations
    cout << setprecision(4) << fixed;
    sold=(bought*profit)+bought;



    // Display the results

    cout << "The company bought the circuit board for $" << bought << endl;
    cout << "They plan on making a 35% profit off of the product,\n";
    cout << "in order to do so, they will have to sell the circuit board for: $" << sold << endl;
    cout << "\n\n";

//----------------------------------- CIN STATEMENT PART ---------------------
    // Cin statement part, input value
    cout << "Lets see if they over priced you too.\n";
    cout << "How much did you pay for your circuit board? :$";
    cin >> input;

    // cin statement calculation
    cout << setprecision(4) << fixed;
    total=input-(input*profit);
    price=input-total;

    //Displaying the results
    cout << "Well you've been robbed, you paid an extra $" << price << endl;
    cout << "You only should've paid $" << total << endl;


    return 0;
}

/*************************************************
//Output


This program will calculate and display
the selling price of a company's product. It will also allow you to
check to see how much the company is profiting off of your items.

The company bought the circuit board for $14.9500
They plan on making a 35% profit off of the product,
in order to do so, they will have to sell the circuit board for: $20


Lets see if they over priced you too.
How much did you pay for your circuit board? :$40.00
Well you've been robbed, you paid an extra $14
You only should've paid $26


***************************************************/