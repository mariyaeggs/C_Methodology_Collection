// variable.cpp	
// Description: Write a program that converts pounds into kilograms. The program prompts the user to enter a number in pounds, 
//converts it to kilograms, and displays the result. One pound is 0.454 kilograms.
// Author: Mariya Eggensperger
// Date: 09.14.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{

	float value1= 0.454;
	int   value3;
	float total;
	
	cout << "Enter the number of pounds: ";
	cin >> value3;
	
	total= (value3*value1);	
	
	cout << value3 << " pounds" << "= " << total << " kilos" << endl;
	
	return 0;
			
} 
