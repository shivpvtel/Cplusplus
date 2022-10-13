/*********************************************************
* file name: Patel_8_6.cpp
* programmer name: Shiv Patel
* date created: 11/19/20
* date of last revision: 11/19/2020
* details of the revision: String Selection Sort
* short description: Sorting words alphabetically
**********************************************************/
#include <iostream>
#include <string>
using namespace std;

//function prototype
void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);

int main() {

    //program description
    cout << "\nThis program organises a list of names Alphabetically\n\n";

    //variable initialization
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim",
                               "Stamey, Marty", "Rose, Geri", "Taylor, Terri","Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose","Setzer, Cathy", "Pike, Gordon","Holland, Beth" };

    // Insert your code to complete this program
    displayArray(names, NUM_NAMES, "Names that need to be sorted: \n--------------------");
    selectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "\nNames that are sorted alphabetically: \n-------------------- ");

    return 0;
}

//function breakdowns

void displayArray(string array[], int ArraySize, string prompt)
{
    cout << prompt << endl;
    //
    for (int i = 0; i < ArraySize; i++)
        cout << array[i] << endl;
    cout << endl;
}

void selectionSort(string array[], int ArraySize)
{
    int Minindex;
    string Minvalue;

    for (int Index = 0; Index < (ArraySize - 1); Index++)
    {
        Minindex = Index;
        Minvalue = array[Index];

        for (int index = Index + 1; index < ArraySize; index++)
        {
            if (array[index] < Minvalue)
            {
                Minvalue = array[index];
                Minindex = index;
            }
        }
        swap(array[Minindex], array[Index]);
    }
}

void swap(string & a, string & b)
{
    string temp = a;
    a = b;
    b = temp;
}

/*
 "/Users/shiv0248/Desktop/cmpsc 121/Week 12 homework 8.6/cmake-build-debug/Week_12_homework_8_6"

This program organises a list of names Alphabetically

Names that need to be sorted:
--------------------
Collins, Bill
Smith, Bart
Allen, Jim
Griffin, Jim
Stamey, Marty
Rose, Geri
Taylor, Terri
Johnson, Jill
Allison, Jeff
Looney, Joe
Wolfe, Bill
James, Jean
Weaver, Jim
Pore, Bob
Rutherford, Greg
Javens, Renee
Harrison, Rose
Setzer, Cathy
Pike, Gordon
Holland, Beth


Names that are sorted alphabetically:
--------------------
Allen, Jim
Allison, Jeff
Collins, Bill
Griffin, Jim
Harrison, Rose
Holland, Beth
James, Jean
Javens, Renee
Johnson, Jill
Looney, Joe
Pike, Gordon
Pore, Bob
Rose, Geri
Rutherford, Greg
Setzer, Cathy
Smith, Bart
Stamey, Marty
Taylor, Terri
Weaver, Jim
Wolfe, Bill


Process finished with exit code 0


 */