/*********************************************************
* file name: Patel_8_7.cpp
* programmer name: Shiv Patel
* date created: 11/19/20
* date of last revision: 11/19/2020
* details of the revision: Binary string search
* short description: Search for names of people on a list for a private event
**********************************************************/
#include <iostream>
#include <string>
using namespace std;

//function prototype
void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);
int BinarySearch(string[], int, string);

int main() {

    //program description
    cout << "\nThis program organises a list of names Alphabetically\n"
            "from there on it check to see if an individuals name,\n"
            "is on the list of not for a private event.\n";

    //variable initialization
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim",
                               "Stamey, Marty", "Rose, Geri", "Taylor, Terri","Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose","Setzer, Cathy", "Pike, Gordon","Holland, Beth" };
    string Name;
    int Position;

    // Insert your code to complete this program
    selectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "\nList for private event \n(sorted alphabetically): \n-------------------- ");

    //User input
    cout << "Choose a name from the list: ";
    getline(cin, Name);

    Position = BinarySearch(names, NUM_NAMES, Name);

    //input validation
    if (Position != -1)
        cout << names[Position] << " is most definitely on the the list!" << endl;
    else
        cout << "Im sorry '" << Name << "' is unfortunately not on the list.\n" << endl;


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

int BinarySearch(string array[], int ArraySize, string Name)
{
    int first = 0,
            last = ArraySize - 1,
            middle,
            position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == Name)
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > Name)
            last = middle - 1;
        else
            first = middle + 1;

    }
    return position;
}

void swap(string & a, string & b)
{
    string temp = a;
    a = b;
    b = temp;
}

int BinarySearch(string array[], int ArraySize, string Name)
{
    int first = 0,
            last = ArraySize - 1,
    middle,
            position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == Name)
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > Name)
            last = middle - 1;
        else
            first = middle + 1;

    }
    return position;
}


/*
 "/Users/shiv0248/Desktop/cmpsc 121/binary string search/cmake-build-debug/binary_string_search"

This program organises a list of names Alphabetically
from there on it check to see if an individuals name,
is on the list of not for a private event.

List for private event
(sorted alphabetically):
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

Choose a name from the list: Holland, Beth
Holland, Beth is most definitely on the the list!

Process finished with exit code 0

 "/Users/shiv0248/Desktop/cmpsc 121/binary string search/cmake-build-debug/binary_string_search"

This program organises a list of names Alphabetically
from there on it check to see if an individuals name,
is on the list of not for a private event.

List for private event
(sorted alphabetically):
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

Choose a name from the list: Kitzinger, Delaney
Im sorry 'Kitzinger, Delaney' is unfortunately not on the list.


Process finished with exit code 0
 */