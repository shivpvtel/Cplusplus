/*********************************************************
* file name: Patel_Quad.cpp
* programmer name: Shiv Patel
* date created: 11/1/20
* date of last revision: 11/1/2020
* details of the revision: Quadratic Equation.
* short description: This is a program that uses the Quadratic equation
                     to calculate its roots
**********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

//function Prototypes
int disc(float, float, float); //function 1
void quadRoots (float, float, float, float&, float&, float&); //function 2

int main()
{
    // Program description
    cout << "\nThis is a program that uses the Quadratic equation"
            "\n to calculate its roots.\n\n";

    //variable declaration
    float A, B, C, discriminant, root1, root2;

    //variable initialization
    cout << "Enter the coefficient for a: ";
    cin >> A;
    cout << "Enter the coefficient for b: ";
    cin >> B;
    cout << "Enter the coefficient for c: ";
    cin >> C;

    //function call
    disc(A, B, C);
    cout << "The discriminant is: " <<  disc(A, B, C) << endl;
    quadRoots (A,  B,  C,discriminant,root1,root2);



return 0;
}

//function 1 breakdown

int disc(float A, float B, float C )
{
   double discriminant = B*B - 4*(A*C) ;
   return discriminant;
}

//function 2 breakdown
void quadRoots (float A, float B, float C, float& discriminant, float& root1, float& root2)
{
    if (disc(A, B, C) < 0)
        cout << "No real roots exists";
    else if (disc(A, B, C) == 0)
    {
        root1= -B/(2*A);
        cout << "The discriminant is 0 causing\n"
                "there to only be one root: " << root1 << endl;
    }
    else if (disc(A, B, C) >= 0)
    {
        root1 = (-B + sqrt(disc(A, B, C))) / (2*A);
        root2 = (-B - sqrt(disc(A, B, C))) / (2*A);
        cout << "The roots of this equation are: " << root1 << " and " << root2 << endl;
    }


}


/* OUTPUTS
"/Users/shiv0248/Desktop/cmpsc 121/Quadratic equation/cmake-build-debug/Quadratic_equation"

This is a program that uses the Quadratic equation
 to calculate its roots.

Enter the coefficient for a: 5
Enter the coefficient for b: 6
Enter the coefficient for c: 4
The discriminant is: -44
No real roots exists
Process finished with exit code 0

"/Users/shiv0248/Desktop/cmpsc 121/Quadratic equation/cmake-build-debug/Quadratic_equation"

This is a program that uses the Quadratic equation
 to calculate its roots.

Enter the coefficient for a: 1
Enter the coefficient for b: 4
Enter the coefficient for c: 4
The discriminant is: 0
The discriminant is 0 causing
there to only be one root: -2

Process finished with exit code 0

"/Users/shiv0248/Desktop/cmpsc 121/Quadratic equation/cmake-build-debug/Quadratic_equation"

This is a program that uses the Quadratic equation
 to calculate its roots.

Enter the coefficient for a: 1
Enter the coefficient for b: 0
Enter the coefficient for c: -4
The discriminant is: 16
The roots of this equation are: 2 and -2

Process finished with exit code 0


 */