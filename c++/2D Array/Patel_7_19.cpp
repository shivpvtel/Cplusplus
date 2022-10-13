
/*********************************************************
* file name: Patel_7_19.cpp
* programmer name: Shiv Patel
* date created: 11/12/20
* date of last revision: 11/12/2020
* details of the revision: 2D array
* short description: calculating specific from an array,
**********************************************************/
#include <iostream>
using namespace std;

//variables for functions
const int ROWS = 3,
        COLUMNS = 5;

//function prototype
double getTotal(const double[][COLUMNS]);
double getAverage(const double[][COLUMNS]);
double getRowTotal(const double[][COLUMNS], const int);
double getColumnTotal(const double[][COLUMNS], const int);
double getHighestInRow(const double[][COLUMNS], const int);
double getLowestInRow(const double[][COLUMNS], const int);
void displayData(const double[][COLUMNS], const int, const int);

int main()
{
    //program description
    cout << "\nThis program will scan an array to get values specific to this array.\n";

    //array initialization
    double test_data[ROWS][COLUMNS] = {{2, 4, 6, 8, 10},
                                       {3, 6, 9, 12, 15},
                                       {4, 8, 12, 16, 20}};
    //variable initialization
    int Row = 3, Column = 5;
    //call function
    displayData(test_data, Row, Column);

    return 0;
}
//function creator sector
void displayData(const double Test[][COLUMNS], const int Row, const int Column)
{
    cout << "Total              = " << getTotal(Test) << endl;
    cout << "Average            = " << getAverage(Test) << endl;
    cout << "Row #" << Row << " total       = " << getRowTotal(Test, Row) << endl;
    cout << "Column #" << Column << " total    = " << getColumnTotal(Test, Column) << endl;
    cout << "Highest in Row #" << Row << "  = " << getHighestInRow(Test, Row) << endl;
    cout << "Lowest in Row #" << Row << "   = " << getLowestInRow(Test, Row) << endl;

}

double getTotal(const double array[][COLUMNS])
{
    double total = 0;
    for (int Row = 0; Row < ROWS; Row++)
    {
        for (int Column = 0; Column < COLUMNS; Column++)
            total += array[Row][Column];

    }

    return total;
}

double getAverage(const double array[][COLUMNS])
{
    double total_array_elements = 0,
            sum;

    for(int Row = 0; Row < ROWS; Row++)
    {
        for(int Column = 0; Column < COLUMNS; Column++)
        {
            total_array_elements++;
            sum += array[Row][Column];
        }

    }
    return sum / total_array_elements;
}

double getRowTotal(const double array[][COLUMNS], const int ROW)
{
    double RowTotal = 0;

    for(int Column = 0; Column < COLUMNS; Column++)
        RowTotal += array[(ROW - 1)][Column];

    return RowTotal;
}

double getColumnTotal(const double array[][COLUMNS], const int COLUMN)
{
    double ColumnTotal = 0;
    // array[0][COLUMN]
    // array[1][COLUMN]
    // array[2][COLUMN]
    // array[3][COLUMN]
    // array[4][COLUMN]
    for(int Row = 0; Row < ROWS; Row++)
        ColumnTotal += array[Row][(COLUMN - 1)];

    return ColumnTotal;
}

double getHighestInRow(const double array[][COLUMNS], const int ROW)
{
    // array[(ROW - 1)][0]
    // array[(ROW - 1)][1]
    // array[(ROW - 1)][2]
    // array[(ROW - 1)][3]
    // array[(ROW - 1)][4]
    double highest = array[(ROW - 1)][0];

    for(int Column = 1; Column < COLUMNS; Column++)
    {
        if(array[(ROW - 1)][Column] >= highest)
            highest = array[(ROW - 1)][Column];

    }

    return highest;
}

double getLowestInRow(const double array[][COLUMNS], const int ROW)
{
    double lowest = array[(ROW - 1)][0];
    for(int Column = 1; Column < COLUMNS; Column++)
    {
        if(array[(ROW - 1)][Column] <= lowest)
            lowest = array[(ROW - 1)][Column];
    }
    return lowest;
}

/*
"/Users/shiv0248/Desktop/cmpsc 121/2D Array Operations/cmake-build-debug/2D_Array_Operations"

This program will scan an array to get values specific to this array.
Total              = 135
Average            = 9
Row #3 total       = 60
Column #5 total    = 45
Highest in Row #3  = 20
Lowest in Row #3   = 4

Process finished with exit code 0

 */