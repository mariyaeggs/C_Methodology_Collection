// sprint.cpp
// Descrioption: Loud talking parrot and hour for talking
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
	int time1;
	
	cout << "Enter time of day parrot screetches: "; 
	cin >> time1; 
	
	if (time1>=7 && time1<=8)
	{
		cout << "Your parrot is allowed to squak now."; 
	}
	else if (time1>=20)
	{
		cout << "It's too late in the evening for a screeching parrot!"; 
	}
	else if (time1<7)
	{
		cout << "Too early in the morning for a screeching parrot!"; 
	}
	else if (time1!=7 && time1!=8 && time1!=20) 
	{
		cout << "Your parrot is too loud.";
	}
	return 0; 
}
		

