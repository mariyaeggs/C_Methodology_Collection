// variable.cpp	
// Description: Write a program that reads a number of feet, converts it to meters, and displays the result. One foot is 0.305 meters.
// Author: Mariya Eggensperger
// Date: 09.14.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{

	float value1= 0.305;
	int   value3;
	float total;
	
	cout << "Enter the number of feet: ";
	cin >> value3;
	
	total= (value3*value1);	
	
	cout << value3 << " feet" << "= " << total << " meters" << endl;
	
	return 0;
			
} 
