// Week6.cpp
// Description: Write a program that displays the following table that converts kilograms to pounds.
// Note of conversion: 1 kilogram = 2.2 pounds and that 1 pound = .453 kilograms
// Author: Mariya Eggensperger
// Date: 10.12.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip> 

using namespace std; 

int main() //initialize code
{
	const int MAX_KILO=199; // initialized variables && constants
	// no need for pound constant as it is a redundancy of the true conversion equation of kilo*2.2
	const int STEPSIZE=1; // increment kilo by 2
	int kilo; 
	float pound; // pounds in decimal format
		std::cout << std:: setprecision(4) << pound << '\n'; //std set precision to 4 numbers, one after the decimal

	
	cout << endl; // print blank line
	cout << "Kilograms   Pounds\n"
		 << "---------   ------\n";
		 
for (int kilo=1; kilo<=MAX_KILO; kilo++)// the "for" loop eliminates need for a starting value
{ 
	cout << setw(6) << kilo << "    " // code for the column formats
		 << setw(6) << kilo*2.2 << "   " << endl; 
	pound=kilo*2.2;  // equation to convert kilo to pound
	kilo=kilo+STEPSIZE;  // increment kilogram a value of 2 as in the assignment prompt
}	
return 0; 	
}
