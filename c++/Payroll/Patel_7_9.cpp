/*********************************************************
* file name: Patel_7_9.cpp
* programmer name: Shiv Patel
* date created: 11/12/20
* date of last revision: 11/12/2020
* details of the revision: payroll
* short description: making a payroll for employees
**********************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
//function prototype

double inputValidate(double, double = 7.50);
void getEmployeeInfo(const int, const int[], double[], double[], double[]);
void displayEmployeeInfo(const int, const int[], const double[]);

int main()
{
//program description
cout <<"\n\nThis program will ask for the employees pay rate\n"
       "and the hours they have worked, it will then calculate\n"
       "the amount the employee made for that shift.\n\n";

//variable initialization
const int NumberOfEmployees = 7;
int employeeId[] = { 5658845,4520125,7895122,8777541,8451277,1302850,7580489 };
double hours[NumberOfEmployees], payRate[NumberOfEmployees], wages[NumberOfEmployees];

//function call
getEmployeeInfo(NumberOfEmployees, employeeId, hours, payRate, wages);
displayEmployeeInfo(NumberOfEmployees, employeeId, wages);

    return 0;
}
//function creation station
void getEmployeeInfo(const int NumberOfEmployees, const int employeeId[], double hours[], double payRate[],double wages[])
{
    for (int i = 0; i < NumberOfEmployees; i++)
    {
        cout << "Enter info for employee #" << employeeId[i] << " " << endl;

        cout << "How many hours have they worked =  ";
        hours[i] = inputValidate(hours[i]);

        cout << "What was their pay rate per hour: ";
        payRate[i] = inputValidate(payRate[i]);

        wages[i] = hours[i] * payRate[i];

        cout << endl;
    }
}

void displayEmployeeInfo(const int NumberOfEmployees, const int employeeId[], const double wages[])
{
    cout << setprecision(2) << fixed;
    cout << "Employee ID number and Payroll: " << endl;
    for (int i = 0; i < NumberOfEmployees; i++)
    {
        cout << "Wages for Employee #" << employeeId[i] << " = $" << wages[i] << endl;
    }
}
double inputValidate(double input, double validNumber)
{
    while (!(cin >> input) || input < validNumber)
    {
        cout << "Error. Your number must be " << validNumber << " or greater: ";
        cin.clear();
    }
    return input;
}


//output
/*
"/Users/shiv0248/Desktop/cmpsc 121/Payroll 7.9/cmake-build-debug/Payroll_7_9"


This program will ask for the employees pay rate
and the hours they have worked, it will then calculate
the amount the employee made for that shift.

Enter info for employee #5658845
How many hours have they worked =  23
What was their pay rate per hour: 34

Enter info for employee #4520125
How many hours have they worked =  20
What was their pay rate per hour: 10

Enter info for employee #7895122
How many hours have they worked =  30
What was their pay rate per hour: 6
Error. Your number must be 7.5 or greater: 8

Enter info for employee #8777541
How many hours have they worked =  19
What was their pay rate per hour: 20

Enter info for employee #8451277
How many hours have they worked =  30
What was their pay rate per hour: 15

Enter info for employee #1302850
How many hours have they worked =  10
What was their pay rate per hour: 50

Enter info for employee #7580489
How many hours have they worked =  8
What was their pay rate per hour: 8

Employee ID number and Payroll:
Wages for Employee #5658845 = $782.00
Wages for Employee #4520125 = $200.00
Wages for Employee #7895122 = $240.00
Wages for Employee #8777541 = $380.00
Wages for Employee #8451277 = $450.00
Wages for Employee #1302850 = $500.00
Wages for Employee #7580489 = $64.00

Process finished with exit code 0

 */
