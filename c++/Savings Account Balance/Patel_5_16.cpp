/********************************************************
* file name: Patel_5_16.cpp
* programmer name: Shiv Patel
* date created: 10/5/20
* date of last revision: 10/5/20
* details of the revision: Saving Account Balance
* short description: Program calculates the balance of a savings account
                     at the end of period of time. it asks the user for
                     the annual interest rate, starting balance, and the
                     amount of months that have passed since the account
                     was made.
**********************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Program description
    cout << "\nThis program will collect data and will calculate the balance";
    cout << "\nof a savings account at the end of a period of time.\n";


    //Variable declarations
    float Balance, StartingBalance, InterestRate, MonthlyInterestRate, YearlyInterest;
    float Deposits, Withdrawals, TotalDeposits, TotalWithdrawals, EarnedInterest;
    int Months=12, MonthsSinceOpen;

    //Variable initialization

    cout << "\nPlease enter the following...";
    cout << "\nYour Account's annual interest rate: ";
    cin >> YearlyInterest;
    cout << "Your account's starting balance: ";
    cin >> StartingBalance;
    cout << "Months since you opened your account: ";
    cin >> MonthsSinceOpen;

    //Calculations
    Balance=StartingBalance;
    MonthlyInterestRate=YearlyInterest/Months;

    //Conditional statement
    for (int a=0 ; a<MonthsSinceOpen; a++) {
        //deposits

        cout << "Amount deposited for Month " << (a + 1) << ": ";
        cin >> Deposits;

        if (Deposits < 0)
        {
            cout << "Deposits cannot be less than 0\n";
            cout << "Amount deposited for Month " << (a + 1) << ": ";
            cin >> Deposits;
        }

        TotalDeposits += Deposits;
        Balance += Deposits;

        if (Balance < 0)
        {
            cout << "Your account has been closed...";
            break;
        }

        //Withdrawals
        cout << "Amount withdrawn for Month " << (a+1) << ": ";
        cin >> Withdrawals;

        if (Withdrawals < 0)
        {
            cout << "Withdrawals cannot be less than 0\n";
            cout << "Amount withdrawn for Month " << (a + 1) << ": ";
            cin >> Withdrawals;
        }

        TotalWithdrawals+=Withdrawals;
        Balance-=Withdrawals;

        if (Balance < 0)
        {
            break;
        }

        //Calculations
        cout << setprecision(2) << fixed;
        InterestRate=(MonthlyInterestRate*Balance);
        Balance+=InterestRate;
        EarnedInterest+=(InterestRate);

        if (Balance < 0)
        {
            break;
        }
    }


    if (Balance<0)
        cout << "Your account has been closed, due to being broke.";
    else
    {
        cout << "Your Account's starting balance was  $"<<StartingBalance<<endl;
        cout << "Your Account's ending balance is     $" << Balance << endl;
        cout << "Your total Withdrawals were          $" << TotalWithdrawals << endl;
        cout << "Your total Deposits were             $" << TotalDeposits << endl;
        cout << "Your total Interest earned is        $" << EarnedInterest << endl;
    }

    return 0;
}
/******
OUTPUT 1
"/Users/shiv0248/Desktop/cmpsc 121/saving account balance/cmake-build-debug/saving_account_balance"

This program will collect data and will calculate the balance
of a savings account at the end of a period of time.

Please enter the following...
Your Account's annual interest rate: .5
Your account's starting balance: 1000
Months since you opened your account: 4
Amount deposited for Month 1: 20
Amount withdrawn for Month 1: 10
Amount deposited for Month 2: -20
Deposits cannot be less than 0
Amount deposited for Month 2: 20
Amount withdrawn for Month 2: -10
Withdrawals cannot be less than 0
Amount withdrawn for Month 2: 10
Amount deposited for Month 3: 20
Amount withdrawn for Month 3: 10
Amount deposited for Month 4: 20
Amount withdrawn for Month 4: 10
Your Account's starting balance was  $1000.00
Your Account's ending balance is     $1221.72
Your total Withdrawals were          $40.00
Your total Deposits were             $80.00
Your total Interest earned is        $181.72

Process finished with exit code 0


OUTPUT 2
"/Users/shiv0248/Desktop/cmpsc 121/saving account balance/cmake-build-debug/saving_account_balance"

This program will collect data and will calculate the balance
of a savings account at the end of a period of time.

Please enter the following...
Your Account's annual interest rate: .2
Your account's starting balance: 2000
Months since you opened your account: 3
Amount deposited for Month 1: 30
Amount withdrawn for Month 1: 10
Amount deposited for Month 2: 30
Amount withdrawn for Month 2: 10
Amount deposited for Month 3: 30
Amount withdrawn for Month 3: 10
Your Account's starting balance was  $2000.00
Your Account's ending balance is     $2163.70
Your total Withdrawals were          $30.00
Your total Deposits were             $90.00
Your total Interest earned is        $103.70

Process finished with exit code 0


 OUTPUT 3
"/Users/shiv0248/Desktop/cmpsc 121/saving account balance/cmake-build-debug/saving_account_balance"

This program will collect data and will calculate the balance
of a savings account at the end of a period of time.

Please enter the following...
Your Account's annual interest rate: .2
Your account's starting balance: 10
Months since you opened your account: 2
Amount deposited for Month 1: 0
Amount withdrawn for Month 1: 10
Amount deposited for Month 2: 0
Amount withdrawn for Month 2: 4
Your account has been closed, due to being broke.
Process finished with exit code 0


 OUTPUT 4



*/