// Week6.cpp
// Write a number guessing game.
// Author: Mariya Eggensperger
// Date: 10.12.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <cstdlib> // random number 
#include <ctime> // random number
using namespace std; 

int user_num, 
    guess;
char end;

int main()
{

do {



srand (time(NULL)); // randomized guess number
int random= rand() % 99; // no grader than 99
//cout << random; //remove comment for visibility of random number

do 
{
	cout << "\n\nGuess the number:  "; //prompt user to guess number
 	cin >> user_num; 
	
	if (user_num==random)
	{
		cout << "\nCongrats! You win!" << endl << endl; // if user is correct
	}
	else
	{
	  if (user_num<random) // if guessed number is too low
	  { 
	   cout << "\nPick a higher number."; 
	  }	
	  else 
	  {
		cout << "\nPick a lower number."; //if guessed number is too low
	  }
	} 	guess++; // increment guess
				
}while (user_num!=random); // when guessed number is not equal to secret number

	cout << "\n\nYou've guessed: " << guess << " time(s)!\n\n"; //tracks guesses
	cout << "Would you like to play again? Press Y for (YES) and N for (NO)\n";
	//prompts user if they want to play again
	cin >> end;
	guess = 0; // discounts previous game plays
} while (end == 'Y'); 

return 0;  
}


