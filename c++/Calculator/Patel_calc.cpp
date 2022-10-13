C/*********************************************************
* file name: Patel_7_4.cpp
* programmer name: Shiv Patel
* date created: 11/5/20
* date of last revision: 11/5/2020
* details of the revision: Larger than N
* short description: This is a program counts numbers from
*                    from a specific point.
**********************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//function prototype
void datascan (char, float);
void ContinueOP(char, float, float& );
//main function
int main()
{
    //program description
    cout << "\nThis program will calculate numbers like\n"
            "similar to how a simple calculator can. \n\n";

    //variable initialization
    int num1,num2;
    float operation;
    float sum, total;


    cout << "Please insert the first number:";
    cin >> num1;
    cout << "Please insert the second number:";
    cin >> num2;
    cout << "Select an operation...\n"
            "'+' for Addition\n"
            "'-' for Subtraction\n"
            "'*' for Multiplication\n"
            "'/' for Division\n"
            "Operation :";
    cin >> operation;

    //function call

    datascan(operation, sum);
    ContinueOP( operation, total, sum );

}


//function breakdown
void datascan (char Operation, float sum)
{
    char operation;
    float total;
    if ((operation=='+')||(operation=='-')||(operation=='*')||(operation=='/'))
    {
        ContinueOP( operation, total, sum );
    }
    else
    {
        cout << "Error, please pick from selection.";
        cin.ignore(operation);
    }
}

void ContinueOP(char operation, float total, float &sum)

{
    int num1,num2;
    if (operation == '+')
        {
        sum = num1 + num2;
        cout << "Your total is " << sum << ":" << endl;
        }
    else if (operation == '-')
    {
        sum = num1 - num2;
        cout << "Your total is " << sum << ":" << endl;
    }
    else if (operation == '/')
    {
        sum = num1 / num2;
        cout << "Your total is " << sum << ":" << endl;
    }
    else if (operation == '*')
    {
        sum = num1 * num2;
        cout << "Your total is " << sum << ":" << endl;
    }

}

