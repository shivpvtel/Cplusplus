/*********************************************************
* file name: Patel_10_12.cpp
* programmer name: Shiv Patel
* date created: 12/03/20
* date of last revision: 12/03/20
* details of the revision: password verifier
* short description:  Password verification
**********************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string password;
    int length;
    bool acceptable=false;
    bool upper=false;
    bool lower=false;
    bool digit=false;
    do
    {
        cout <<"Creating a Password\n";
        cout << "Password must contain 6 characters.\n";
        cout << "An upper and a lower case as well as a number.\n"
                "Enter Password: ";
        getline(cin, password);
        length = password.length();
        if(length<6)
        {
            cout<<"Error! Your password must be at least 6 characters\n";
        }
        for(int i=0; i<length; i++)
        {
            if(isupper(password[i]))
            {
                upper=true;
            }
            if(islower(password[i]))
            {
                lower=true;
            }
            if(isdigit(password[i]))
            {
                digit=true;
            }
        }
        if(upper==true && lower==true && digit==true)
        {
            acceptable=true;
        }
        else if (upper==true && lower ==true && digit== false)
        {
            cout << "Your password needs to have at least one number" << endl;
        }
        else if (upper==true && lower == false && digit== true)
        {
            cout << "Your password needs to have at least one lower case character" << endl;
        }
        else if (upper== false && lower == true && digit== true)
        {
            cout << "Your password needs to have at least one upper case character" << endl;
        }
    }
    while(acceptable==false);
    cout<<"Your password is acceptable.\n";
    return 0;
}
/*
"/Users/shiv0248/Desktop/cmpsc 121/Password Verifier/cmake-build-debug/Password_Verifier"
Creating a Password
        Password must contain 6 characters.
An upper and a lower case as well as a number.
Enter Password: shivpaetel
        Creating a Password
Password must contain 6 characters.
An upper and a lower case as well as a number.
Enter Password: Shivpatel4
        Your password is acceptable.

Process finished with exit code 0


"/Users/shiv0248/Desktop/cmpsc 121/Password Verifier/cmake-build-debug/Password_Verifier"
Creating a Password
Password must contain 6 characters.
An upper and a lower case as well as a number.
Enter Password: 3232323
Creating a Password
Password must contain 6 characters.
An upper and a lower case as well as a number.
Enter Password: shivpatel
Your password needs to have at least one upper case character
Creating a Password
Password must contain 6 characters.
An upper and a lower case as well as a number.
Enter Password: shivp4
Your password needs to have at least one upper case character
Creating a Password
Password must contain 6 characters.
An upper and a lower case as well as a number.
Enter Password: Shivpatel45
Your password is acceptable.

Process finished with exit code 0




*/