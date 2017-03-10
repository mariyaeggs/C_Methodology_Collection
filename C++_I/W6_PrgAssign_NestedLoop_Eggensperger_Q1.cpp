// Week6.cpp
// Description: Write a program to find all of the factors of a number entered by the user. 
// Name: Mariya Eggensperger
// Date: 10.15.2015
// Compiler: Dev C++ 5.11

#include <iostream>
using namespace std; 

int main ()
{
	int factor=1,
		num; 
	int	num_comp=(num/factor); // computed number after input and conversion
	char sym=('*');
 
	
	cout << "Enter a number to compute its factors: "; 
	cin >> num; 
	cout << "The factors of " << num << " are" << num_comp+sym; 
	

	while (num>=factor)
	{
	if (not(num % factor)) 
	{
	 cout << factor << sym; 
	 
	 factor++; 
	}
	
	cout << endl; 
	}
}
