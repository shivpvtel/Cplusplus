/*********************************************************
* file name: Patel_4_13_rewrite.cpp
* programmer name: Shiv Patel
* date created: 10/1/20
* date of last revision: 10/1/20
* details of the revision: Book Club points
* short description: Serendipity Booksellers has a book club that awards points to
                     its customers based on the number of books purchased each month.
                     The points are awarded as follows:
                      - Purchased 0 books = 0 points
                      - Purchased 1 books = 5 points
                      - Purchased 2 books = 15 points
                      - Purchased 3 books = 30 points
                      - Purchased 4 or more books = 60 points.
                       USING A SWITCH STATEMENT
**********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Program description
    cout << "\nLets calculate the amount of points you have been awarded\n";
    cout << "based of the number of books you purchased this month.";


    //variables
    int BooksPurchased;

    //Inputs
    cout << "\nEnter the number of books you bought this month:";
    cin >> BooksPurchased;
    if (BooksPurchased > 4)
    {
        cout << "You bought " << BooksPurchased << " books this month," << endl;
        cout << "You earned 60 Points.";
    }
    else if (BooksPurchased<0)
        cout << " not a valid entry";
    else
        cout << "You bought " << BooksPurchased << " books this month," << endl;
    switch (BooksPurchased) {
        case 0:
            cout << "You earned 0 Points.";
            break;
        case 1:
            cout << "You earned 5 Points.";
            break;
        case 2:
            cout << "You earned 15 Points.";
            break;
        case 3:
            cout << "You earned 30 Points.";
            break;
        case 4:
            cout << "You earned 60 Points.";
            break;

    }



    return 0;

}

/*output


 * 1

Lets calculate the amount of points you have been awarded
based of the number of books you purchased this month.
Enter the number of books you bought this month:1
You bought 0 books this month,
You earned 0 Points.
Process finished with exit code 0

 * 2

Lets calculate the amount of points you have been awarded
based of the number of books you purchased this month.
Enter the number of books you bought this month:1
You bought 1 books this month,
You earned 5 Points.
Process finished with exit code 0

 * 3

Lets calculate the amount of points you have been awarded
based of the number of books you purchased this month.
Enter the number of books you bought this month:2
You bought 2 books this month,
You earned 15 Points.
Process finished with exit code 0


 * 4

Lets calculate the amount of points you have been awarded
based of the number of books you purchased this month.
Enter the number of books you bought this month:3
You bought 3 books this month,
You earned 30 Points.
Process finished with exit code 0

 * 5

Lets calculate the amount of points you have been awarded
based of the number of books you purchased this month.
Enter the number of books you bought this month:4
You bought 4 books this month,
You earned 60 Points.
Process finished with exit code 0

 * 6

Lets calculate the amount of points you have been awarded
based of the number of books you purchased this month.
Enter the number of books you bought this month:34
You bought 34 books this month,
You earned 60 Points.
Process finished with exit code 0


 */
