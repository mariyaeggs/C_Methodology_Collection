// Week6.cpp
// Description: Write a program that finds primes of 1 to 1000. 
// Name: Mariya Eggensperger
// Date: 10.17.2015
// Compiler: Dev C++ 5.11

#include <iostream>
using namespace std; 

int main()
{
	bool factor; 
	
	for (int i=1; i<=1000; i++)
	factor = false; // assumption that any number is prime
	{
		for (int j=2; j<i; j++)
		{
			if (i % j==0) 
			{
				factor=true; // switch initial assumption
			}
		}
			if (factor==false)
		{
			cout << i;
			cout << "\n\n";  
		}
	}
	return 0; 
}
