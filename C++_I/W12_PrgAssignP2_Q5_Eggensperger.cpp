// week12.cpp	
// Description: Write a program that uses two arrays (parallel arrays) 
// to store jersey numbers and goals scored for a team of five basketbal players
// Author: Mariya Eggensperger
// Date: 11/23/2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

int main()
{
	const int size=5; // five basketball players maximum
	int arrayJerseyNum[size]; 
	int arrayGoalScored[size]; 
	int shirtNum; 
	int goalNum; 
	
	// prompt user to enter five numbers
	cout << "Enter five jersey numbers: " << endl; 
	
	for (int i=0; i<size; i++)
	{
	cin >> shirtNum; 
	arrayJerseyNum[i]=shirtNum; 
	}
	//end line 
	cout << endl; 

	// prompt user to enter five integer goals
	cout << "Enter five, game goals scored: " << endl; 

	for (int i=0; i<size; i++)
	{
	cin >> goalNum; 
	arrayGoalScored[i]=goalNum;
	}
	// end line
	cout << endl; 
	
	for(int i = 0; i<size; i++)
	{
	// parallel array chart
     cout<<setw(10)<<"Jersey #: "<<arrayJerseyNum[i]<<setw(10)<<" Goals: "<<arrayGoalScored[i]<<endl;
	}
	return 0; 
	}
