/*********************************************************
* file name: Patel_6_14.cpp
* programmer name: Shiv Patel
* date created: 10/22/20
* date of last revision: 10/22/20
* details of the revision: Order Status
* short description: Order status of a wholesale company
**********************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

double inputValidate(double, double);
char inputValidate(char);


int main()
{

// Program description
    cout << "\n\nThis program will calculate and display\n"
         <<  "the status of an order from the wholesale \nCopper Wire Company.\n\n";

//variables
    double SpoolsOrdered, SpoolsInStock, SpecialCharges,
           BackOrder, Subtotal, ShipReady, Total, SpecialChargesTotal;
    char Selection;
    const double PRICE_PER_SPOOL = 100.00;

//Inputs
    cout << "Enter number of spools ordered: ";
    SpoolsOrdered = inputValidate(SpoolsOrdered, 1);

    cout << "Enter number of number of spools in stock: ";
    SpoolsInStock = inputValidate(SpoolsInStock, 0);

    cout << "Any special shipping & handling charges? (y/n):";
    Selection = inputValidate(Selection);

//Outputs and Calculations
    if (Selection == 'Y' || Selection == 'y')
    {
        cout << "Enter special shipping & handling charges: ";
        SpecialCharges = inputValidate(SpecialCharges, 0);
        cout << setprecision(2) << fixed << endl;

        cout << "Number of spools ordered? =  " << SpoolsOrdered << endl;
        cout << "Number of spools in stock? =  " << SpoolsInStock << endl;
        cout << "Amount of special charges? $" << SpoolsInStock << endl;

        if (SpoolsOrdered > SpoolsInStock) {
            BackOrder = SpoolsOrdered - SpoolsInStock;
            ShipReady = SpoolsOrdered - BackOrder;
            Subtotal = ShipReady * PRICE_PER_SPOOL;
            SpecialChargesTotal = ShipReady * SpecialCharges;
            Total = Subtotal + SpecialChargesTotal;

            cout << "Spools that are on Backorder =  " << BackOrder << endl;
            cout << "Spools that are ready to ship =  " << ShipReady << endl;
            cout << "Price per spool = $" << PRICE_PER_SPOOL << endl;
            cout << "Subtotal = $" << Subtotal << endl;
            cout << "The special charges = $" << SpecialCharges << endl;
            cout << "Total Special Charges = $" << SpecialChargesTotal << endl;
            cout << "The total is = $" << Total << endl;
        } else {
            ShipReady = SpoolsOrdered;

            Subtotal = ShipReady * PRICE_PER_SPOOL;

            SpecialChargesTotal = ShipReady * SpecialCharges;

            Total = Subtotal + SpecialChargesTotal;

            cout << "Spools that are ready to ship = " << ShipReady << endl;
            cout << "Price per spool = $" << PRICE_PER_SPOOL << endl;
            cout << "Subtotal = $" << Subtotal << endl;
            cout << "The special charges = $" << SpecialCharges << endl;
            cout << "Total special charges = $" << SpecialChargesTotal << endl;
            cout << "The total is = $" << Total << endl;

        }    }
        else
        {
            cout << setprecision(2) << fixed << endl;

            cout << "Number of spools ordered? =  " << SpoolsOrdered << endl;
            cout << "Number of spools in stock? =  " << SpoolsInStock << endl;
            cout << "Amount of special charges? $" << SpoolsInStock << endl;

            if (SpoolsOrdered > SpoolsInStock)
            {
                BackOrder = SpoolsOrdered - SpoolsInStock;
                ShipReady = SpoolsOrdered - BackOrder;
                Subtotal = ShipReady * PRICE_PER_SPOOL;
                SpecialChargesTotal = ShipReady * SpecialCharges;
                Total = Subtotal + SpecialChargesTotal;

                cout << "Spools that are on Backorder =  " << BackOrder << endl;
                cout << "Spools that are ready to ship =  " << ShipReady << endl;
                cout << "Price per spool = $" << PRICE_PER_SPOOL << endl;
                cout << "Subtotal = $" << Subtotal << endl;
                cout << "The special charges = $" << SpecialCharges << endl;
                cout << "Total Special Charges = $" << SpecialChargesTotal << endl;
                cout << "The total is = $" << Total << endl;

            }
            else
            {
                ShipReady = SpoolsOrdered;
                Subtotal = ShipReady * PRICE_PER_SPOOL;
                SpecialChargesTotal = ShipReady * SpecialCharges;
                Total = Subtotal + SpecialChargesTotal;

                cout << "Spools that are ready to ship = " << ShipReady << endl;
                cout << "Price per spool = $" << PRICE_PER_SPOOL << endl;
                cout << "Subtotal = $" << Subtotal << endl;
                cout << "The special charges = $" << SpecialCharges << endl;
                cout << "Total special charges = $" << SpecialChargesTotal << endl;
                cout << "The total is = $" << Total << endl;
            }
        }
        return 0;
    }

//Functions
double inputValidate(double num1, double num2)
{
    while (!(cin >> num1) || num1 < num2)
    {
        cout << "Error. Input cannot be less than " << num2 << ": ";
    }
        return num1;
    }
char inputValidate(char letter)
{
     cin >> letter;
        while (!((letter == 'y') || (letter == 'Y') || (letter == 'n') || (letter == 'N')))
        {
            cout << "ERROR: a Y or an N must be entered: ";
            cin >> letter;
        }
        return letter;
}

/**** OUTPUT


"/Users/shiv0248/Desktop/cmpsc 121/Order Status/cmake-build-debug/Order_Status"


This program will calculate and display
the status of an order from the wholesale
Copper Wire Company.

Enter number of spools ordered: 2
Enter number of number of spools in stock: 10
Any special shipping & handling charges? (y/n):y
Enter special shipping & handling charges: 15

Number of spools ordered? =  2.00
Number of spools in stock? =  10.00
Amount of special charges? $10.00
Spools that are ready to ship = 2.00
Price per spool = $100.00
Subtotal = $200.00
The special charges = $15.00
Total special charges = $30.00
The total is = $230.00

Process finished with exit code 0


"/Users/shiv0248/Desktop/cmpsc 121/Order Status/cmake-build-debug/Order_Status"


This program will calculate and display
the status of an order from the wholesale
Copper Wire Company.

Enter number of spools ordered: 10
Enter number of number of spools in stock: 200
Any special shipping & handling charges? (y/n):Y
Enter special shipping & handling charges: 12

Number of spools ordered? =  10.00
Number of spools in stock? =  200.00
Amount of special charges? $200.00
Spools that are ready to ship = 10.00
Price per spool = $100.00
Subtotal = $1000.00
The special charges = $12.00
Total special charges = $120.00
The total is = $1120.00

Process finished with exit code 0


"/Users/shiv0248/Desktop/cmpsc 121/Order Status/cmake-build-debug/Order_Status"


This program will calculate and display
the status of an order from the wholesale
Copper Wire Company.

Enter number of spools ordered: 2
Enter number of number of spools in stock: 5
Any special shipping & handling charges? (y/n):n

Number of spools ordered? =  2.00
Number of spools in stock? =  5.00
Amount of special charges? $5.00
Spools that are ready to ship = 2.00
Price per spool = $100.00
Subtotal = $200.00
The special charges = $0.00
Total special charges = $0.00
The total is = $200.00

Process finished with exit code 0


"/Users/shiv0248/Desktop/cmpsc 121/Order Status/cmake-build-debug/Order_Status"


This program will calculate and display
the status of an order from the wholesale
Copper Wire Company.

Enter number of spools ordered: 6
Enter number of number of spools in stock: 10
Any special shipping & handling charges? (y/n):N

Number of spools ordered? =  6.00
Number of spools in stock? =  10.00
Amount of special charges? $10.00
Spools that are ready to ship = 6.00
Price per spool = $100.00
Subtotal = $600.00
The special charges = $0.00
Total special charges = $0.00
The total is = $600.00

Process finished with exit code 0

"/Users/shiv0248/Desktop/cmpsc 121/Order Status/cmake-build-debug/Order_Status"


This program will calculate and display
the status of an order from the wholesale
Copper Wire Company.

Enter number of spools ordered: 10
Enter number of number of spools in stock: 4
Any special shipping & handling charges? (y/n):2
ERROR: a Y or an N must be entered: n

Number of spools ordered? =  10.00
Number of spools in stock? =  4.00
Amount of special charges? $4.00
Spools that are on Backorder =  6.00
Spools that are ready to ship =  4.00
Price per spool = $100.00
Subtotal = $400.00
The special charges = $0.00
Total Special Charges = $0.00
The total is = $400.00

Process finished with exit code 0


****/