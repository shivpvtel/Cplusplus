/*********************************************************
* file name: Patel_7_4.cpp
* programmer name: Shiv Patel
* date created: 11/5/20
* date of last revision: 11/5/2020
* details of the revision: Larger than N
* short description: This is a program counts numbers from
*                    from a specific point.
**********************************************************/
#include <iostream>
using namespace std;

//function prototype
void NumbersGreater(const int[], int, int);
//main function
int main()
{
    //program description
    cout << "\nThis program will display numbers larger than N,\n"
            "as along as the input is between 1 to 50. \n\n";

    //variable declaration
    const int Size = 50;
    int n;
    int ArrayNumbers[Size] = {1,2,3,4, 5,
                              6,7,8,9,10,
                              11,12,13,14,15,
                              16,17,18,19,20,
                              21,22,23,24,25,
                              26,27,28,29,30,
                              31,32,33,34,35,
                              36,37,38,39,40,
                              41,42,43,44,45,
                              46,47,48,49,50};

    //variable initialization
    cout << "Enter a number between 1 to 50: ";
    cin >> n;
        if ((n<0) || (n > 50))
        {
            cout << "Error. Enter a number between 1 to 50: ";
            cin >> n;
        }

    //outputs
    cout << "Numbers greater than " << n << " are: " << endl;
    NumbersGreater(ArrayNumbers, Size, n); //function call
    cout << endl;

    return 0;
}


    //function breakdown
void NumbersGreater(const int array[], int Size, int n)
{
    for (int i = 0; i < Size; i++)
    {
        if (array[i] > n)
        {
            if(i == Size - 1)
                cout << array[i] << endl;
            else
                cout << array[i] << "\n";

        }

    }

}


/*
 "/Users/shiv0248/Desktop/cmpsc 121/Larger than N/cmake-build-debug/Larger_than_N"

This program will display numbers larger than N,
as along as the input is between 1 to 50.

Enter a number between 1 to 50: 34
Numbers greater than 34 are:
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50


Process finished with exit code 0

"/Users/shiv0248/Desktop/cmpsc 121/Larger than N/cmake-build-debug/Larger_than_N"

This program will display numbers larger than N,
as along as the input is between 1 to 50.

Enter a number between 1 to 50: -1
Error. Enter a number between 1 to 50: 1
Numbers greater than 1 are:
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50


Process finished with exit code 0

 "/Users/shiv0248/Desktop/cmpsc 121/Larger than N/cmake-build-debug/Larger_than_N"

This program will display numbers larger than N,
as along as the input is between 1 to 50.

Enter a number between 1 to 50: 51
Error. Enter a number between 1 to 50: 49
Numbers greater than 49 are:
50


Process finished with exit code 0

 */