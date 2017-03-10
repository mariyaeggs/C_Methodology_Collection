// Week9.cpp
// Description: Rewrite the following programs, using at least 4 functions. 
//Ths is the rewrite from Week 8 #3
// Date: 10.30.2015
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
	cin >> hours; 
//	hours=get_hours(); 
	cout << "\nEnter your hourly rate of pay (as a float): "; 
	cin >> rate; 
//	rate=get_rate();
	total=hours*rate;
	// cout << earnings *tactic to check value of mpg
	earnings(total); 
	 
	return 0;  
}
float get_hours()
{
	float hours; 
//	cin >> hours;
	return hours; 
}
float get_rate()
{	 
	float rate; 
//	cin >> rate; 
	return rate; 
}  
float earnings(float total)
{
	if (total<=10000)
	{
	cout << "\nYou got to work harder chap...that ain't an annual living. Your earnings are $" << total << ".\n" << endl;  
	}
	if (total<=20000000000)
	{
		cout << "\nShame. That's just plain greedy of you, chap. Your earnings are $" << total << ". \n" << endl; 
	}
return 0; 	
}




