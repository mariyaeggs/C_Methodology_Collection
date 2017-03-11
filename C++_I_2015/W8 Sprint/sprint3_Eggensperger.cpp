// framework.cpp
// Descrioption: Program to ask the user to enter any number other than 5
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 


int main()
{

    int userNum = 0;
    int i = 1;
    while (i < 11)
    {
        cout << "Enter any number other than 5: ";
        cin >> userNum;

        if (userNum == 5)
        {
            cout << "\nHey! You weren't supposed to enter 5!\n\n";
            exit(0); // exits program
        }

        else if (i == 10)
        {
            cout << "\nWow, you are more patient then I am; you win." << endl;
            exit(0);
        }
        i++; // increment i
    }
    return 0;
}
