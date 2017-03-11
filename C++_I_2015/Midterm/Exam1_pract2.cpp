// Equation is (letterGrade*units)/units

#include <iostream>
using namespace std; 

int main ()
{
	
	int courses; 
	float units;
	char letterGrade A=4.0,
					 B=3.0, 
					 C=2.0,
					 D=1.0,
					 F=1.0
					 
	cout << "How many courses did you take? "; 
	cin >> courses; 
	
	cout << "Answer these questions about each course. . . \n"; 
	
	cout << "What is the letter grade for the course? "; 
	cin >> letterGrade; 
	
	cout << "How many units was the course? "; 
	cin >> units; 
	
}
