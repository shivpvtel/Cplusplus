/*********************************************************
* file name: Patel_4_18.cpp
* programmer name: Shiv Patel
* date created: 10/1/20
* date of last revision: 10/1/20
* details of the revision: Fat Gram Calculator.
* short description: Write a program that asks for the number of calories and fat
                      grams in a food. The program should display the percentage of
                      calories that come from fat. If the calories from fat are less
                      than 30% of the total calories of the food, it should also display
                      a message indicating that the food is low in fat.
                        -One gram of fat has 9 calories, so
                        -Calories from fat=fat_grams * 9
                        -The percentage of calories from fat can be calculated as
                        -Calories from fat/total_calories
**********************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Program description
    cout << "\nThis Program will calculate the percentage of\n";
    cout << "calories that come from fat.";

    //variables
    float FatGrams, Calories, CaloriePercentage, FatCalorie;

    //Inputs
    cout << "\nEnter the number Calories: ";
    cin >> Calories;


    //Conditional statement

    if (Calories>0)
    {
        cout << "Enter the number of fat grams: ";
        cin >> FatGrams;
        if (FatGrams>0) {
            FatCalorie = FatGrams * 9;
            CaloriePercentage = (FatCalorie / Calories) * 100;

            if (Calories > FatCalorie) {
                cout << "Total calorie fat is: " << FatCalorie << endl;
                cout << "The total percentage of calories that comes from fat is: " << CaloriePercentage << "%"<< endl;
                if (CaloriePercentage<30)
                    cout << "The food is low in fat.\n";

            } else {
                cout << "Data was incorrectly entered try again";
            }
        }
        else
        {
            cout << "Fat grams has to be more than 0";
        }

    }
    else
        cout << "Calories has to be more than 0";


    return 0;

}
/*output


 * 1

This Program will calculate the percentage of
calories that come from fat.
Enter the number Calories: 200
Enter the number of fat grams: 8
Total calorie fat is: 72
The total percentage of calories that comes from fat is: 36%

Process finished with exit code 0


 * 2

This Program will calculate the percentage of
calories that come from fat.
Enter the number Calories: 150
Enter the number of fat grams: 2
Total calorie fat is: 18
The total percentage of calories that comes from fat is: 12%
The food is low in fat.

Process finished with exit code 0

 */
