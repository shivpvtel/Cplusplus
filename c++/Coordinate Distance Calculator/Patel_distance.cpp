/*********************************************************
* file name: Patel_quiz2_09-10-2020.cpp
* programmer name: Shiv Patel
* date created: 9/10/20
* date of last revision: 9/10/20
* details of the revision: QUiz
* short description: program to ask user to input two coordinate points
* and calculates and displays the distance between the two points
**********************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // Program description
    cout << "\nThis program will calculate and display" << endl
         << "the distance between two coordinate points.\n\n";

    // Declaring the variables: types and names
    double x1, y1, x2, y2, dist;

    // Variable initialization: getting the input from the user

    cout << "Enter the x of the first coordinate point: ";
    cin >> x1;
    cout << "Enter the y of the first coordinate point: ";
    cin >> y1 ;
    cout << "Enter the x of the second coordinate point: ";
    cin >> x2 ;
    cout << "Enter the y of the second coordinate point: ";
    cin >> y2;


 // Displaying the inputs
    cout << "\nThe coordinates are (" << x1 << "," << x2 << ") and (" << y1 << "," << y2 << "),\n";

    // Calculations **** fill in using two math functions
    cout << setprecision(2) << fixed;
 dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2));

    // Display the results **** add output stream manipulator as necessary

    cout << "and the distance between the them is: " << dist << " units." << endl;

    return 0;
}
//output with points (10,20), (4,8)
/****************************************************
This program will calculate and display
the distance between two coordinate points.

Enter the x of the first coordinate point: 10
Enter the y of the first coordinate point: 20
Enter the x of the second coordinate point: 4
Enter the y of the second coordinate point: 8

The coordinates are (10,4) and (20,8),
and the distance between the them is: 13.42 units.

Process finished with exit code 0
*******************************************************/