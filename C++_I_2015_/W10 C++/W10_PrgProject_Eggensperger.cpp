// Description: Write a program to play a number guessing game; 
// Name: Mariya Eggensperger
// Date: 
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <math.h>
using namespace std; 


//void get_secretNum (num1&, num2&); 
//void show_guessTotal (guesses&);


int main ()
{
	
	string input; // asks the user if they want to play game
	int num1, num2, guesses, numLoops;  
	
//	get_secretNum (num1,num2);
//	show_guesses(guesses); 

		
	cout << "Would you like to play a guessing game?\n"
		 << "Input (y) for yes and (n) for no.\n"; 
	cin >> input; 
	
	if (input=="y" or input=="yes")
	{
		
		cout << "Prime choice my chum! \n";
	}
	else
	{
		cout << "You've no choice! What an ugly trick!" << endl; 
		cout << "Enter the number of loops to be excuted: \n";
		cin >> numLoops;
		for (int i=1; i <= numLoops; i++)
		{
		cout << "We are on loop: " << i << ".\n\n"; 
		}
		cout << "Enter an integer to guess the secret number: " << guesses << endl;
		return 0; 
	}
	
	
		
	return 0; 	
	}


	
	

//}		
//	cout << "Enter an integer to guess the secret number: "<< guess << endl;
//	return 0; 
//}
//void get_num(val1) // n1 stores info for val1
//{ 
//	cin >> val1; 
//	return; 
//}
//void store_guesses(guesses&, n1)
//{
//	cout << "Guesses used: " << guesses; 
//	guesses=val1++; 
//	return; 
//}
//
////	char userAnswer='Y, y, N, n'; 
////	
////	srand(time(NULL)); 
////	
////	secret_num=
////	
////	cout << "Let's play a guessing game!"
////		 << "Press Y for 'yes' and N for 'no.'"; 
////	cin >> userAnswer; 
////	
////	if (userAnswer=!'N')
////	{
////		cout << "That was a groovy move!"; 
////	}
////	else 
////	{
////		cout << "You've been bamboozled. You don't have a choice!"; 
////	}
////
////}
