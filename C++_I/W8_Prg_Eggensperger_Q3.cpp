// Week8.cpp
// Description: Write a program that computes total earnings for an employee.
// Date: 10.25.2015
// Name: Mariya Eggensperger
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

float get_hours(); 
float get_rate();
float earnings(float total);

int main() // main() function
{
	float hours, // call variables
		  rate,
		  total; // primitive
		
		  
	cout << "Enter your hours worked per week (as a float): "; 
	hours=get_hours(); 
	cout << "\nEnter your hourly rate of pay (as a float): "; 
	rate=get_rate();
	total=hours*rate;
	// cout << earnings *tactic to check value of mpg
	earnings(total); 
	 
	return 0;  
}
float get_hours()
{
	float hours; 
	cin >> hours;
	return hours; 
}
float get_rate()
{	 
	float rate; 
	cin >> rate; 
	return rate; 
}  
float earnings(float total)
{
	
	cout << "\nYour total earnings is " << total << endl;  
	return 0; 
}




