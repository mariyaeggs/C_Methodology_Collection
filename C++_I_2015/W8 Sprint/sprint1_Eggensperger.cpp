// framework.cpp
// Descrioption: Write a program that allows the user to enter the grade scored in a programming class (0-100).
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main ()
{
	int grade; 
	
	cout << "Enter your grade (0-100): "; 
	cin >> grade; 
	
	if (grade==100)
	{
		cout << "You got a perfect score!" << endl; 
	}
	if (grade >=90 && grade <=100) 
	{  
        cout << "You scored an A!" << endl;  
    }    
	if (grade>=80 && grade <=89)
	{
		cout << "You scored a B!" << endl;
	}  
	if (grade>=70 && grade <=79)
	{
		cout << "You scored a C!" << endl;
	}  
	if (grade>=60 && grade <=69)
	{
		cout << "You scored a D!" << "\nYou will need to work harder." << endl;
	}  
	if (grade>=0 &&  grade <=59)
	{
		cout << "You scored an F!" << "\nThis is a failing grade." << endl;
	}  
	//else
	//{
		//cout << "Your score is: " << grade << endl;  (//code not necessary when modifications added).
	//}
	 return 0; 
}
