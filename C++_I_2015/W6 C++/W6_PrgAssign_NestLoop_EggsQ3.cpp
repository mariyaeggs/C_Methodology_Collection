// Week6.cpp
// Description: Write a program to find the four perfect numbers between 1-10000.
// Name: Mariya Eggensperger
// Date: 10.17.2015
// Compiler: Dev C++ 5.11

#include <iostream>
using namespace std; 

int main()
{ 

	int i, 
		j, 
		sum; 
	
	cout << "The four perfect numbers are:  " << endl; 
	
	for (i=1; i <= 10000; i++)
	{
		sum=0;
		
		for (j=1; j<i; j++)
		{
			if (i % j ==0)
			{
				sum+=j; 
			}
	
		}
			
		if (sum==i)
			{
				cout << i << endl; 
			}
	}
	return 0; 		
}
	
	



