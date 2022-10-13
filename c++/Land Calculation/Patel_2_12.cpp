/*********************************************************
* file name: patel_2_12.cpp
* programmer name: Shiv Patel
* date created: 9/9/20
* date of last revision: 9/9/20
* details of the revision: Land Calculation
* short description:  One of equivalent to 43560 square feet. write a program that
                      calculates the number of acres in a tract of land with
                       391,876 square feet
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Program description
    cout << "\n\nThis program will calculate and display:" << endl
         << "The number of acres in a 391,876 square feet tract of land."
            "\n\n";

    // Declaring the variables:
    const int oneacre=43560;
    int Landsize, tractofland;

    // Calculations
    Landsize = 391876;
    tractofland=Landsize/oneacre;

    // Display the results
    cout << "If one acre is equal too 43,560 square feet, then we just have to divide that\n"
            "by the tract of land. So 391976/43560 = 8 acres, that means that...\n";
    cout << "There are " << tractofland << " acres in a " << Landsize << " square feet tract of land.\n\n";

    return 0;
}

/**********************************************************


This program will calculate and display:
The number of acres in a 391,876 square feet tract of land.

If one acre is equal too 43,560 square feet, then we just have to divide that
by the tract of land. So 391976/43560 = 8 acres, that means that...
There are 8 acres in a 391876 square feet tract of land.


Process finished with exit code 0



**********************************************************/
