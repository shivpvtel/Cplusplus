/*********************************************************
* file name: Patel_2_14.cpp
* programmer name: Shiv Patel
* date created: 9/10/20
* date of last revision: 9/10/20
* details of the revision: Homework
* short description: displaying information with a single cout statement
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Program description
    cout << "This program will display" << endl
         << "my personal information.\n";

    // Declaring the variables: types and names
     string name = "Shiv Patel",
            addy = "1 White house Ave, Albany, Jamaica, 01420",
            number = "778-564-8909",
            major = "Computer Science";

    // Variable initialization: getting the input from the user



    // Display the results **** add output stream manipulator as necessary

   cout << "\n" << name << "\n" << addy << "\n" << number << "\n" << major << endl;

    return 0;
}

/****************************************************

This program will display
my personal information.

Shiv Patel
1 White house Ave, Albany, Jamaica, 01420
778-564-8909
Computer Science

*******************************************************/
