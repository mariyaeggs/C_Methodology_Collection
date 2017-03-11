// simpleinput1.cpp
// Description: Demonstration of simple 1-input cin with multiple inputs.
// Author: Mariya Eggensperger
// Date: 09.10.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main()
{
	float value1,
		  value2; 
	float total; 
	
	cout << "Enter 2 float values, separated by a space:   ";
	cin >> value1 >> value2;    
	
	total = value1 + value2; 
	
	cout << value1 << " + " << value2 <<" = " << total << endl; 
	
	return 0; 
}
