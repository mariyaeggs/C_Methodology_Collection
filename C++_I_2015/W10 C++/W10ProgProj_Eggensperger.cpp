#include <iostream> 
#include <cstdlib> 
#include <time.h> 
#include <string> 

using namespace std;
// Function Prototypes.
int input_guess();
int output_attempt(int,int);

int main()
{
	
	 // seed random variable	
    srand(time(NULL));  
    int number = rand() % 100 + 1; 
    
    
    int user_attempts = 0; 
    user_attempts = input_guess(); 
    
	int user_guess, 
	    magic_number; 
	    
	std::string choice;  
    
    if (user_guess > magic_number) 
        cout << "\nGuess lower " << user_attempts << "\ntries left\n" << endl;
    else if (user_guess < magic_number) 
        cout << "\nGuess higher " << user_attempts << "\ntries left\n" << endl;
    else if (user_guess == magic_number) 
        cout << "\nSnap! That's correct." << user_attempts << "\ntries left\n" << endl;
    else  (user_guess != magic_number); 
        cout << "\nDo you want to play again? Press y/n: " << choice << endl;
    return 0;
}
int input_guess()
{
    int user_guess;
    int bet_attempts = 0;
    int total_attempts=0;
    int attempts=0; 

    cout << "Bet attempts to guess correctly:  \n" << endl;
    cin >> bet_attempts;
    
   
    for (int i = 1;i <= bet_attempts; i++)
    {
        cout << "\nGuess the number between 1 and 100: \n"<< endl;
        cin >> user_guess;
        total_attempts += bet_attempts;
    }
    // Call Function.
    attempts = output_attempt(total_attempts,bet_attempts);
    return attempts;
}
int output_attempts(int total_attempts,int bet_attempts)
{

    return (total_attempts)-bet_attempts;
}
