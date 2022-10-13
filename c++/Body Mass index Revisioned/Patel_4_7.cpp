/*********************************************************
* file name: Patel_4_5.cpp
* programmer name: Shiv Patel
* date created: 9/23/20
* date of last revision: 9/23/20
* details of the revision: Body Mass Index
* short description: Converting seconds into minutes,hours and days
                      - 60 seconds = 1 minute
                      - 3600 seconds = 1 hour
                      - 86,4000 seconds = 1 day
**********************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Program description
    cout << "\nConverting Seconds into Minutes, Hours and Days\n";


    //variables
    int Seconds, Time ;

    //Inputs
    cout << "\nEnter a number seconds:";
    cin >> Seconds;


    //Calculate
    cout << setprecision(2) << fixed;
    cout << "You entered " << Seconds << " seconds." << endl;
    if (Seconds <= 59)
    {
        cout << "The amount of time you entered is less than a minute.";
    }
    else if (Seconds >= 60 && Seconds < 3600)
    {
        Time = Seconds/60.0;
        cout << "There are " << Time << " minutes in " << Seconds << " Seconds.";
    }
    else if (Seconds >= 3600 && Seconds < 86400)
    {
        Time = Seconds/3600.0;
        cout << "There are " << Time << " hours in " << Seconds << " Seconds.";
    }
    else if (Seconds >= 86400)
    {
        Time = Seconds/86400.0;
        cout << "There are " << Time << " days in " << Seconds << " Seconds.";
    }
    cout<<endl;
    return 0;

}
/*output


 * 1 - less than 60 seconds

Converting Seconds into Minutes, Hours and Days

Enter a number seconds:40
You entered 40 seconds.
The amount of time you entered is less than a minute.

Process finished with exit code 0

 * 2 - more than a minute

Converting Seconds into Minutes, Hours and Days

Enter a number seconds:400
You entered 400 seconds.
There are 6 minutes in 400 Seconds.

Process finished with exit code 0

 * 3 - more than an hour

Converting Seconds into Minutes, Hours and Days

Enter a number seconds:4000
You entered 4000 seconds.
There are 1 hours in 4000 Seconds.

Process finished with exit code 0

 * 4 - more than a day

Converting Seconds into Minutes, Hours and Days

Enter a number seconds:400000
You entered 400000 seconds.
There are 4 days in 400000 Seconds.

Process finished with exit code 0


 */
