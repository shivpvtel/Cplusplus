/*********************************************************
* file name: Patel_5_18.cpp
* programmer name: Shiv Patel
* date created: 10/15/20
* date of last revision: 10/15/20
* details of the revision: Population Bar chart
* short description:  program that produces a bar chart showing
                      the population growth of Prairieville.
**********************************************************/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int count;
    float Population;
    ifstream InFile;
    int Year=1900;
    ofstream Output;
    Output.open("Output.txt");

    cout << "\nThis program will display the population growth of Prairieville\n";

    Output << "\nPRAIRIEVILLE POPULATION GROWTH\n";
    Output << "(each * represents 1,000 people)\n\n";


    InFile.open("People.txt");
    if (InFile.fail())
    {
        cout << "file not opened"<< endl;
        exit (1);
    }
    Population=0;
    while(InFile>>Population){
        Output << Population << " ";

        for(int a=1;a<=Population/1000;a++)
        {
            Output << "*";
        }
        Output << "\n";
    }

 Year+=20;

    InFile.close();
    Output.close();

    return 0;
}