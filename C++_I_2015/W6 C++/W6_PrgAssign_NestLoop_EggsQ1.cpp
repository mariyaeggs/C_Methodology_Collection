// Week6.cpp
// Description: Write a program that finds factors of number entered by user. 
// Name: Mariya Eggensperger
// Date: 10.17.2015
// Compiler: Dev C++ 5.11

#include <iostream>
using namespace std; 

int main()
{
	int num, // user number
		fac; // factors
	bool neg = true;   // by default bool is true
			
	cout << "Enter a number to factor: "; 
	cin >> num; 
	cout << "Factors of " << num << " are "; 
	if (num < 0)
	{
		num = num * -1; 
		neg=false; 
	}
	for (fac=1; fac<=num; fac++)
	{
	if (neg)	// if neg is false, skip code and move to else
	{
		if ( num % fac == 0)
		{
		cout << fac << " ";
		} 
	} else
	{
		if ( num % fac == 0)
		{
		cout << fac*-1 << " ";
		} 
	}
 	}
	return 0; 
}
	

