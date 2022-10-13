/*********************************************************
* file name: Patel_5_6.cpp
* programmer name: Shiv Patel
* date created: 10/1/20
* date of last revision: 10/1/20
* details of the revision: Distance traveled.
* short description: write a program that will calculate the distance traveled
 *                      based off of the speed and time the user inputs.
**********************************************************/
#include <iostream>
using namespace std;
int main()
{

    //program description
         cout << "This will display the distance a vehicle has traveled\n";
         cout<<  "using it's speed and it's time.\n\n";
    //variable declarations
    int Speed, Hours, Distance = 0, graph;

    cout << "What is the Vehicle's speed? :";
    cin >> Speed;
    if (Speed < 0)
    {
        cout << "Your Vehicle did not move at all. Try again.\n";
        cout << "What is your Vehicle's Speed? :";
        cin >> Speed;
        if (Speed>=0)
        {
            cout << "How many hours did the vehicle traveled for? :";
            cin >> Hours;
            if (Hours<1)
            {
                cout << "Hours cannot be less than 1 :";
                cin >> Hours;
            }
        }
    }
    else {
        cout << "How many hours did the vehicle traveled for? :";
        cin >> Hours;
        if (Hours < 1) {
            cout << "Hours cannot be less than 1 :";
            cin >> Hours;
        }

    }


    cout << "Hour Distance Traveled" << endl;
    cout << "________________________"<< endl;

    for(graph = 0; graph < Hours; graph++)
    {
            Distance += Speed;
            cout << "   " << (graph + 1) << "   " << Distance<<endl;

    }

    return 0;
}
/*output


 * 1

This will display the distance a vehicle has traveled
using it's speed and it's time.

What is the Vehicle's speed? :45
how many hours did the vehicle traveled for? 3
Hour Distance Traveled
________________________
   1   45
   2   90
   3   135

Process finished with exit code 0


 * 2

This will display the distance a vehicle has traveled
using it's speed and it's time.

What is the Vehicle's speed? :75
How many hours did the vehicle traveled for? :0
Hours cannot be less than 1 :3
Hour Distance Traveled
________________________
   1   75
   2   150
   3   225

Process finished with exit code 0


 * 3

This will display the distance a vehicle has traveled
using it's speed and it's time.

What is the Vehicle's speed? :0
How many hours did the vehicle traveled for? :1
Hour Distance Traveled
________________________
   1   0

Process finished with exit code 0

 * 4

This will display the distance a vehicle has traveled
using it's speed and it's time.

What is the Vehicle's speed? :-1
Your Vehicle did not move at all. Try again.
What is your Vehicle's Speed? :3
How many hours did the vehicle traveled for? :4
Hour Distance Traveled
________________________
   1   3
   2   6
   3   9
   4   12

Process finished with exit code 0



 */


