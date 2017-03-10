// sprint.cpp
// Descrioption: speeding tickets
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
	int speed; 
	char bdayInput; 
	char Y;
	int bonus=0; 
	
	cout << "Is today your birthday? Press Y for (Yes) and N for (No):  "; 
	cin >> bdayInput; 
	
	if (bdayInput== 'Y')
	{
		bonus=5;
		cout << "\n\nAn extra 5 speeds will be added to your  speed."; 
	}
	
	cout << "\nInput your speed to view your issued speeding ticket: "; 
	cin>> speed; 
	
	if (speed<=60+bonus)
	{
		cout << "No ticket.";
	}
	else if (speed>=61+bonus && speed<=80+bonus)
	{
		cout << "You got a small ticket.";
	}
	else if (speed>=81+bonus)
	{
		cout << "You got a big ticket."; 
	}
	return 0; 	
}
