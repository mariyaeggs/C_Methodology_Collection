// week12.cpp	
// Description: Write program that asks user to enter up to 
// ten numerical grades and give them a letter value. 
// Author: Mariya Eggensperger
// Date: 11/23/2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std;


// main function
int main()
{
	const int size=10; // ten numerical grades
	float arrayGrade[size];
	float numericGrade; 


	cout <<"Enter grade: " << endl;
	
	for (int i = 0; i < size; i++)
	{
		
		cin >> numericGrade; 
		arrayGrade[i]=numericGrade; 
	}
	for (int i=0; i<size; i++)
	{
		cout << "Grade[" << i << "] => " << arrayGrade[i]; 
			
		if (arrayGrade[i] >= 89)
		{
			cout  << " => " << "A"; 
		}	
		else if (arrayGrade[i] >= 79)
			{
				cout  << " => " << "B"; 
			}
		else if (arrayGrade[i] >= 69)
			{
				cout  << " => " << "C"; 
			}
		else if (arrayGrade[i] >= 59)
			{
				cout  << " => " << "D"; 
			}
		else 
			{
			 cout  << " => " << "F WHOMP!"; 
		
			}
			cout << endl;
	}
	return 0;
}


