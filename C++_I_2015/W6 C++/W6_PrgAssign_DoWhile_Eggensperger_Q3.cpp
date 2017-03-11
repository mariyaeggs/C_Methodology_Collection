// Week6.cpp
// Description: Write a program that inputs a series of 24 hourly temperatures from the user.
// Author: Mariya Eggensperger
// Date: 10.12.2015
// Compiler: Dev-C++ 5.11

#include <iostream> // for cout functions
#include <string> // for string functions
#include <iomanip> 
using namespace std; 

std::string printAll (int temp); // string for negative/positive values
std::string printAstr (int temp); //string for positive "*" print
std::string printAstrNeg (int temp); // string for negative "*" print

int main()
{
int counter=1; 
int temp1; // I have intentionally set code to only 10 values for simplification purposes.
int temp2;
int temp3;  
int temp4; 
int temp5; 
int temp6; 
int temp7;  
int temp8; 
int temp9; 
int temp10; 

cout << "Enter ten 24 hour temperatures (separated by a space):   "; 
cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6 >> temp7 >> temp8 >> temp9 >> temp10; 

cout << "\n      -30     "<< "0     " << "30      " << "60     " << "90     " << "120     \n" << endl;
cout << setw(4) << fixed << temp1 << printAll(temp1) << endl; 
cout << setw(4) << fixed << temp2 << printAll(temp2) << endl; 
cout << setw(4) << fixed << temp3 << printAll(temp3) << endl; 
cout << setw(4) << fixed << temp4 << printAll(temp4) << endl; 
cout << setw(4) << fixed << temp5 << printAll(temp5) << endl; 
cout << setw(4) << fixed << temp6 << printAll(temp6) << endl; 
cout << setw(4) << fixed << temp7 << printAll(temp7) << endl; 
cout << setw(4) << fixed << temp8 << printAll(temp8) << endl;
cout << setw(4) << fixed << temp9 << printAll(temp9) << endl; 
cout << setw(4) << fixed << temp10<< printAll(temp10) << endl; 

return 0; 
}

std::string printAll (int temp) {
	std::string output; 
	
	
	if (temp>=0) // positive temperatures
	{
		output=printAstr(temp/3);
	}
	else
	{
		output=printAstrNeg(temp/3);
	}
	return output; 
}


std::string printAstr (int temp) {
    std::string output(""); // blank space
    do {
        output += "*"; 
    } while (output.length() < temp);
    output = std::string("          ") + "|" + output;
    return output;
}

std::string printAstrNeg (int temp) {
    temp = temp*(-1); // -1 is to change the code to positive so computer can read it
    std::string output(""); 
    int numspaces;
    numspaces = 10-temp;
    output.insert(0, temp, '*');
    output.insert(0, numspaces, ' ');
    output = output + "|";
    return output;
}


