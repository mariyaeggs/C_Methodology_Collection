// Week6.cpp
// Description: Write a program that displays two tables converting kilograms to pounds and vice versa. 
// Note of conversion: 1 kilogram = 2.2 pounds and that 1 pound = .453 kilograms
// Author: Mariya Eggensperger
// Date: 10.12.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip> 

using namespace std; 

int main() //initialize code
{
	const int MAX_KILO=199; // initialize variables && constants
	const int MAX_LB=515; 
	const int KILO_STEP=1; // increment kilo by 1
	const int LB_STEP=4; // increment lb by 4
	float kilo_secondary; 
	float pound_initial; // pounds in float decimal format
	int pound_secondary;  
	


cout << endl; // print blank line
cout << left << "Kilograms     Pounds   |   Pounds     Kilograms\n"
	 << left << "---------     ------   |   ------     ----------\n";
	
for (int kilo_initial=1; kilo_initial<=MAX_KILO/2+1; kilo_initial++)
{
	// table equations, conversions, formatting.
	cout << left << setw(6) << kilo_initial*2-1 << "        " // code for the column formats
		 << std::setprecision(5) << left << setw(6) << (kilo_initial*2-1)*2.2 << "   |   "
		 << left << setw(6) << kilo_initial*5+15 <<  "     "
		 << std::setprecision(4)<< left << setw(6) << (kilo_initial*5+15)*0.453 << endl; 
	 
}
return 0;

}


