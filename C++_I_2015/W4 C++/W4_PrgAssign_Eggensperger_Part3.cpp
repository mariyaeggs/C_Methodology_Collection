// Week4.cpp
// Description: Write a program to compute the average of 3 numbers. 
// There should be a constant, MAX_NUMBERS, that is set to 3. 
// Author: Mariya Eggensperger
// Date: 09.25.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 
#include <iomanip>

int main()
{
	const int MAX_NUMBERS=3;
	int value1, value2, value3;
	int sumValue;
	int intAverage;
	float floatAverage;
	int Nothing;
	
	cout << "Enter the first value:  ";
	cin >> value1; 
	cout <<"Enter the second value:  ";
	cin >> value2; 
	cout << "Enter the third value:  ";
	cin >> value3;
	
	sumValue=(value1+value2+value3);
	cout << "Total:  " << sumValue; 
	cout << "\n";
	
	intAverage=(sumValue)/MAX_NUMBERS;
	
	floatAverage=(sumValue)/(float)MAX_NUMBERS;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	std::cout << std::fixed << std::setprecision(4);
	cout << "Average:  " << floatAverage << endl << endl;
	
	return 0;
}
