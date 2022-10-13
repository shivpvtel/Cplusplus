/*********************************************************
* file name: Patel_6_11.cpp
* programmer name: Shiv Patel
* date created: 11/1/20
* date of last revision: 11/1/2020
* details of the revision: Lowest Drop Score.
* short description: This program will calculate and display the
                     average of 5 scores as well as whilst dropping
                     and displaying the lowest score.
**********************************************************/

#include <fstream>
#include <iostream>
using namespace std;

//functions prototypes
void getscore(int &);
void calcAverage(int , int , int , int , int );
int findLowest(int , int , int , int , int );

int main()
{

    //Program description
    cout << "\nThis program will calculate and display the"
            "\naverage of 5 scores as well as whilst dropping"
            "\nand displaying the lowest score.\n\n";

    //variable declarations
    int score1,  score2,  score3,  score4,  score5;

    //calling functions
        //variable initialization
    getscore(score1);
    getscore(score2);
    getscore(score3);
    getscore(score4);
    getscore(score5);

    calcAverage(score1,  score2,  score3,  score4,  score5);

    cout << "The lowest score was: " << findLowest (score1,  score2,  score3,  score4,  score5);


 return 0;
}

// function breakdown
void getscore(int &score)
    {
        cout << "Enter Score: ";
        cin >> score;
        if (score < 0 || score > 100 )
        {
            cout << "Enter a score between 0-100 please: ";
            cin >> score;
        }
    }


void calcAverage(int score1, int score2, int score3, int score4, int score5)
    {
        int average, lowest = findLowest (score1,  score2,  score3,  score4,  score5);
        cout << setprecision(2) << fixed;
            if (score1==lowest)
                average = (score2 + score3 + score4 + score5)/4;
            else if (score2==lowest)
                average = (score1 + score3 + score4 + score5)/4;
            else if (score3==lowest)
                average = (score1 + score2 + score4 + score5)/4;
            else if (score4==lowest)
                average = (score1 + score2 + score3 + score5)/4;
            else if (score5==lowest)
                average = (score1 + score2 + score3 + score4)/4;

        cout << "The average score is: " << average << endl;
    }




int findLowest(int score1, int score2, int score3, int score4, int score5)
    {
        int lowest;

        if (score1 <= score2)
        {
            if (score1 <= score3 )
            {
                if (score1 <= score4)
                {
                    if (score1 <= score5)
                    {
                        lowest = score1;
                    }
                }
            }
        }
        return lowest;
    }

/* OUTPUTS

"/Users/shiv0248/Desktop/cmpsc 121/lowest drop score/cmake-build-debug/lowest_drop_score"

This program will calculate and display the
average of 5 scores as well as whilst dropping
and displaying the lowest score.

Enter Score: 23
Enter Score: 98
Enter Score: 87
Enter Score: 67
Enter Score: 79
The average score is: 82
The lowest score was: 23
Process finished with exit code 0

"/Users/shiv0248/Desktop/cmpsc 121/lowest drop score/cmake-build-debug/lowest_drop_score"

This program will calculate and display the
average of 5 scores as well as whilst dropping
and displaying the lowest score.

Enter Score: -10
Enter a score between 0-100 please: 23
Enter Score: 89
Enter Score: 67
Enter Score: 87
Enter Score: 68
The average score is: 77
The lowest score was: 23
Process finished with exit code 0

"/Users/shiv0248/Desktop/cmpsc 121/lowest drop score/cmake-build-debug/lowest_drop_score"

This program will calculate and display the
average of 5 scores as well as whilst dropping
and displaying the lowest score.

Enter Score: 1
Enter Score: 2
Enter Score: 3
Enter Score: 4
Enter Score: 5
The average score is: 3
The lowest score was: 1
Process finished with exit code 0
*/