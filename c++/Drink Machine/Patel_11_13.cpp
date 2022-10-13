/*********************************************************
* file name: Patel_11_13.cpp
* programmer name: Shiv Patel
* date created: 12/9/20
* date of last revision: 12/9/2020
* details of the revision: drink machine
**********************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct SodaInfor
{
    string name;
    double cost;
    int numDrinks;
};

void setMachine(SodaInfor drinkMachine[]);
void machineItem(SodaInfor drinkMachine[], const int& DRINK_MACHINE_SIZE);
double getNum();
int getIntNum();
int getNumBetween(int min, int max);
double enterBill();
bool bills(double bill);
int billsLeft(double* bills, double num);
void pay(double totalAmount);

int main()
{
    const int DRINK_MACHINE_SIZE=5;
    SodaInfor drinkMachine[DRINK_MACHINE_SIZE];
    int num;
    double totalAmount = 0,bill = 0;

    cout << "The following program will display a soda vending machine\n"
            "program, that will calculate and display total earned from your sales.\n\n";
    setMachine(drinkMachine);

    while (true)
    {

        cout << "   Drink Name  Cost    Number in Machine\n\n";
        machineItem(drinkMachine, DRINK_MACHINE_SIZE);
        cout << "0)                          quit\n\n";
        cout << "Enter your choice: ";

        num = getNumBetween(0, 5);

        if (num == 0)
        {
            break;
        }
        else
        {
            while (drinkMachine[num - 1].numDrinks == 0)
            {
                cout << "The drink you selected is sold out, choose other drink:";
                num = getNumBetween(0, 5);
                if (num == 0)
                {
                    pay(totalAmount);
                    break;
                }
            }
            cout << "You had selected a " << drinkMachine[num - 1].name << ", The price of the soda will be $"
                << drinkMachine[num - 1].cost << endl << endl;
            totalAmount += drinkMachine[num - 1].cost;
            drinkMachine[num - 1].numDrinks -= 1;
            pay(totalAmount);
            cout << "Exiting...\n" << endl << endl;
        }
    }
    cout << "Total money earned: " << totalAmount << endl << endl;

}
void pay(double totalAmount)
{
    double bill = 0;
    if (totalAmount != 0)
    {
        cout << "The total amount will be: " << totalAmount << endl
             << "Now enter your change\n"
                "(bills, quarters, dimes, and nickels are accepted) :";
        totalAmount -= enterBill();
        while (totalAmount > 0)
        {
            cout << "You still need to enter $" << totalAmount << endl
                 << "Enter your bills: ";
            totalAmount -= enterBill();
        }
        totalAmount *= -1;
        if (totalAmount != 0)
        {
            cout << "Your change had: " << endl;
            bill = billsLeft(&totalAmount, 1.0);
            if (bill != 0)
                cout << (int)bill << " Dollar bills " << endl;
            bill = billsLeft(&totalAmount, 0.25);
            if (bill != 0)
                cout << (int)bill << " Quarters " << endl;
            bill = billsLeft(&totalAmount, 0.10);
            if (bill != 0)
                cout << (int)bill << " Dimes" << endl;
            bill = billsLeft(&totalAmount, 0.05);
            if (bill != 0)
                cout << (int)bill << " Nickels" << endl;
            if (totalAmount != 0) // penni
                cout << (int)totalAmount << " Pennies" << endl;
        }
    }
}
void machineItem(SodaInfor drinkMachine[], const int& DRINK_MACHINE_SIZE)
{
    for (int i = 0; i < DRINK_MACHINE_SIZE; i++)
    {
        cout << i+1 << ") "
             << setw(10) << right << drinkMachine[i].name << "  "
             << setw(4) << right << fixed << setprecision(2) <<   drinkMachine[i].cost << "    "
             << setw(9) << right << drinkMachine[i].numDrinks << endl << endl;
    }
}
void setMachine(SodaInfor drinkMachine[]) // add new drink to the mechine, enter here
{
    // name,cost,numberDrink
    drinkMachine[0]= { "Cola",0.75,20};
    drinkMachine[1]= { "Root Beer",0.75,20 };
    drinkMachine[2]= { "Lemon-Lime",0.75,20 };
    drinkMachine[3]= { "Grape Soda",0.80,20 };
    drinkMachine[4]= { "Cream Soda",0.80,20 };
}
double enterBill()
{
    double num;
    num = getNum();
    while (!(bills(num)))
    {
        cout << "Try again one more time: ";
        num = getNum();
    }
    return num;
}
bool bills(double bill)
{
    switch ((int)(bill*100))
    {
        case 5:
        case 10:
        case 25:
        case 100:
            return true;
        default:
            return false;
    }
}
int billsLeft(double* bills,double num)
{
    int numLeft = 0;
    numLeft = (int)(*bills / num);
    *bills -= numLeft*num;
    return numLeft;
}
double getNum()
{
    double enter;
    while (!(cin >> enter))
    {
        cout << "Enter a number please:";
        cin.clear();
        cin.ignore(100, '\n');
    }
    return enter;
}
int getIntNum()
{
    double num;
    num = getNum();
    while ((int)num != num)
    {
        cout << "Please enter a number: ";
        num = getNum();
    }
    return (int)num;
}
int getNumBetween(int min,int max)
{
    int num;
    num = getIntNum();
    while (num<min || num >max)
    {
        cout << "Please enter a number that is greater than " << min << " and less than " << max << ", try again: ";
        num = getIntNum();
    }
    return num;
}


/*
 "/Users/shiv0248/Desktop/cmpsc 121/drink machine simulator/cmake-build-debug/drink_machine_simulator"
The following program will display a soda vending machine
program, that will calculate and display total earned from your sales.

   Drink Name  Cost    Number in Machine

1)       Cola  0.75           20

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 3
You had selected a Lemon-Lime, The price of the soda will be $0.75

The total amount will be: 0.75
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
Your change had:
1 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           20

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           19

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 5
You had selected a Cream Soda, The price of the soda will be $0.80

The total amount will be: 1.55
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $0.55
Enter your bills: 0.25
You still need to enter $0.30
Enter your bills: 0.25
You still need to enter $0.05
Enter your bills: 0.05
You still need to enter $0.00
Enter your bills: 0.00
Try again one more time: 1
Your change had:
1 Dollar bills
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           20

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           19

4) Grape Soda  0.80           20

5) Cream Soda  0.80           19

0)                          quit

Enter your choice: 4
You had selected a Grape Soda, The price of the soda will be $0.80

The total amount will be: 2.35
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $1.35
Enter your bills: 1
You still need to enter $0.35
Enter your bills: 0.25
You still need to enter $0.10
Enter your bills: 0.10
You still need to enter $0.00
Enter your bills: 1
Your change had:
3 Quarters
2 Dimes
0 Pennies
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           20

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           19

4) Grape Soda  0.80           19

5) Cream Soda  0.80           19

0)                          quit

Enter your choice: 0
Total money earned: 2.35


Process finished with exit code 0



 ////////////if soda is sold out///////////
 "/Users/shiv0248/Desktop/cmpsc 121/drink machine simulator/cmake-build-debug/drink_machine_simulator"
The following program will display a soda vending machine
program, that will calculate and display total earned from your sales.

   Drink Name  Cost    Number in Machine

1)       Cola  0.75           20

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 0.75
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
Your change had:
1 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           19

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 1.50
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $0.50
Enter your bills: 1
Your change had:
2 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           18

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 2.25
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $1.25
Enter your bills: 1
You still need to enter $0.25
Enter your bills: 1
Your change had:
3 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           17

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 3.00
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $2.00
Enter your bills: 1
You still need to enter $1.00
Enter your bills: 1
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           16

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 3.75
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $2.75
Enter your bills: 1
You still need to enter $1.75
Enter your bills: 1
You still need to enter $0.75
Enter your bills: 1
Your change had:
1 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           15

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 4.50
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $3.50
Enter your bills: 1
You still need to enter $2.50
Enter your bills: 1
You still need to enter $1.50
Enter your bills: 1
You still need to enter $0.50
Enter your bills: 1
Your change had:
2 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           14

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 5.25
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $4.25
Enter your bills: 1
You still need to enter $3.25
Enter your bills: 1
You still need to enter $2.25
Enter your bills: 1
You still need to enter $1.25
Enter your bills: 1
You still need to enter $0.25
Enter your bills: 1
Your change had:
3 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           13

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 6.00
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $5.00
Enter your bills: 1
You still need to enter $4.00
Enter your bills: 1
You still need to enter $3.00
Enter your bills: 1
You still need to enter $2.00
Enter your bills: 1
You still need to enter $1.00
Enter your bills: 1
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           12

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 6.75
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $5.75
Enter your bills: 1
You still need to enter $4.75
Enter your bills: 1
You still need to enter $3.75
Enter your bills: 11
Try again one more time:
1
You still need to enter $2.75
Enter your bills: 1
You still need to enter $1.75
Enter your bills: 1
You still need to enter $0.75
Enter your bills: 1
Your change had:
1 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           11

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 7.50
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $6.50
Enter your bills: 1
You still need to enter $5.50
Enter your bills: 1
You still need to enter $4.50
Enter your bills: 1
You still need to enter $3.50
Enter your bills: 1
You still need to enter $2.50
Enter your bills: 1
You still need to enter $1.50
Enter your bills: 1
You still need to enter $0.50
Enter your bills: 1
Your change had:
2 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75           10

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 8.25
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $7.25
Enter your bills: 1
You still need to enter $6.25
Enter your bills: 1
You still need to enter $5.25
Enter your bills: 1
You still need to enter $4.25
Enter your bills: 1
You still need to enter $3.25
Enter your bills: 1
You still need to enter $2.25
Enter your bills: 1
You still need to enter $1.25
Enter your bills: 1
You still need to enter $0.25
Enter your bills: 1
Your change had:
3 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            9

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 9.00
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $8.00
Enter your bills: 1
You still need to enter $7.00
Enter your bills: 1
You still need to enter $6.00
Enter your bills: 1
You still need to enter $5.00
Enter your bills: 1
You still need to enter $4.00
Enter your bills: 1
You still need to enter $3.00
Enter your bills: 1
You still need to enter $2.00
Enter your bills: 1
You still need to enter $1.00
Enter your bills: 1
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            8

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 9.75
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $8.75
Enter your bills: 1
You still need to enter $7.75
Enter your bills: 1
You still need to enter $6.75
Enter your bills: 1
You still need to enter $5.75
Enter your bills: 1
You still need to enter $4.75
Enter your bills: 1
You still need to enter $3.75
Enter your bills: 1
You still need to enter $2.75
Enter your bills: 1
You still need to enter $1.75
Enter your bills: 1
You still need to enter $0.75
Enter your bills: 1
Your change had:
1 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            7

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 10.50
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $9.50
Enter your bills: 1
You still need to enter $8.50
Enter your bills: 1
You still need to enter $7.50
Enter your bills: 1
You still need to enter $6.50
Enter your bills: 1
You still need to enter $5.50
Enter your bills: 1
You still need to enter $4.50
Enter your bills: 1
You still need to enter $3.50
Enter your bills: 1
You still need to enter $2.50
Enter your bills: 1
You still need to enter $1.50
Enter your bills: 1
You still need to enter $0.50
Enter your bills: 1
Your change had:
2 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            6

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 11.25
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $10.25
Enter your bills: 1
You still need to enter $9.25
Enter your bills: 1
You still need to enter $8.25
Enter your bills: 1
You still need to enter $7.25
Enter your bills: 1
You still need to enter $6.25
Enter your bills: 1
You still need to enter $5.25
Enter your bills: 1
You still need to enter $4.25
Enter your bills: 1
You still need to enter $3.25
Enter your bills: 1
You still need to enter $2.25
Enter your bills: 1
You still need to enter $1.25
Enter your bills: 1
You still need to enter $0.25
Enter your bills: 1
Your change had:
3 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            5

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 12.00
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $11.00
Enter your bills: 1
You still need to enter $10.00
Enter your bills: 1
You still need to enter $9.00
Enter your bills: 1
You still need to enter $8.00
Enter your bills: 1
You still need to enter $7.00
Enter your bills: 1
You still need to enter $6.00
Enter your bills: 1
You still need to enter $5.00
Enter your bills: 1
You still need to enter $4.00
Enter your bills: 1
You still need to enter $3.00
Enter your bills: 1
You still need to enter $2.00
Enter your bills: 1
You still need to enter $1.00
Enter your bills: 1
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            4

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 12.75
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $11.75
Enter your bills: 1
You still need to enter $10.75
Enter your bills: 1
You still need to enter $9.75
Enter your bills: 1
You still need to enter $8.75
Enter your bills: 1
You still need to enter $7.75
Enter your bills: 1
You still need to enter $6.75
Enter your bills: 1
You still need to enter $5.75
Enter your bills: 1
You still need to enter $4.75
Enter your bills: 1
You still need to enter $3.75
Enter your bills: 1
You still need to enter $2.75
Enter your bills: 1
You still need to enter $1.75
Enter your bills: 1
You still need to enter $0.75
Enter your bills: 1
Your change had:
1 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            3

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 13.50
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $12.50
Enter your bills: 1
You still need to enter $11.50
Enter your bills: 1
You still need to enter $10.50
Enter your bills: 1
You still need to enter $9.50
Enter your bills: 1
You still need to enter $8.50
Enter your bills: 1
You still need to enter $7.50
Enter your bills: 1
You still need to enter $6.50
Enter your bills: 1
You still need to enter $5.50
Enter your bills: 1
You still need to enter $4.50
Enter your bills: 1
You still need to enter $3.50
Enter your bills: 1
You still need to enter $2.50
Enter your bills: 1
You still need to enter $1.50
Enter your bills: 1
You still need to enter $0.50
Enter your bills: 1
Your change had:
2 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            2

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 14.25
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
1
You still need to enter $13.25
Enter your bills: You still need to enter $12.25
Enter your bills: 1
You still need to enter $11.25
Enter your bills: 1
You still need to enter $10.25
Enter your bills: 1
You still need to enter $9.25
Enter your bills: 1
You still need to enter $8.25
Enter your bills: 1
You still need to enter $7.25
Enter your bills: 1
You still need to enter $6.25
Enter your bills: 1
You still need to enter $5.25
Enter your bills: 1
You still need to enter $4.25
Enter your bills: 1
You still need to enter $3.25
Enter your bills: 1
You still need to enter $2.25
Enter your bills: 1
You still need to enter $1.25
Enter your bills: 1
You still need to enter $0.25
Enter your bills: 1
Your change had:
3 Quarters
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            1

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1
You had selected a Cola, The price of the soda will be $0.75

The total amount will be: 15.00
Now enter your change
(bills, quarters, dimes, and nickels are accepted) :1
You still need to enter $14.00
Enter your bills: 1
You still need to enter $13.00
Enter your bills: 1
You still need to enter $12.00
Enter your bills: 1
You still need to enter $11.00
Enter your bills: 1
You still need to enter $10.00
Enter your bills: 1
You still need to enter $9.00
Enter your bills: 1
You still need to enter $8.00
Enter your bills: 1
You still need to enter $7.00
Enter your bills: 1
You still need to enter $6.00
Enter your bills: 1
You still need to enter $5.00
Enter your bills: 1
You still need to enter $4.00
Enter your bills: 1
You still need to enter $3.00
Enter your bills: 1
You still need to enter $2.00
Enter your bills: 1
You still need to enter $1.00
Enter your bills: 1
Exiting...


   Drink Name  Cost    Number in Machine

1)       Cola  0.75            0

2)  Root Beer  0.75           20

3) Lemon-Lime  0.75           20

4) Grape Soda  0.80           20

5) Cream Soda  0.80           20

0)                          quit

Enter your choice: 1

The drink you selected is sold out, choose other drink:0

Total money earned: 15.00


Process finished with exit code 0
 */