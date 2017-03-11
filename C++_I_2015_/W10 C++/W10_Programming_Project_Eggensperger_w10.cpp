//Description: Number guessing game that keeps track of tries used.
// Name: Mariya Eggenesperger
// Date: 11/10/2015
// Compiler: Dev-C++

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>


using namespace std;

// main function
int main()
{
	
	// call variables
    int number, 
		guess,
		tries; 
	char answer= 'Y'&& 'y' &&'N' &&'n'; 
    int numOfGuesses; // user guesses

	bool done = false; 
	bool playing=true; 
	
    
	while (playing) // while user is playing the guessing game
	{
	
	// Generate a random number between 1 and 100.
    number = (rand()+ time(0)) % 100 + 1;
    //cout << number; /*for testing

	cout << "Bet on your tries to guess correctly: "; 
    cin >> tries; 
    tries=tries; 
		
	while(!done && tries>0)
 	{
        cout << "\nGuess the number between 1 and 100: ";
        cin >> guess;
        cout << endl << endl;

        
        if(number > guess)
        {
            cout << "Guess higher.\n" << endl;
            cout << tries-1 << " tries left." << endl;
        }
        else if (number < guess)
        {
            cout << "Guess lower\n" << endl;
            cout << tries-1 << " tries left." << endl;
        }
        
        else 
        {
            cout << "\nHazaah! What a stealthy win!\n" << endl << endl;
            cout << "\nYou guessed the number in " << tries << " tries." << endl << endl; 
            
			// exits loop
            done = true;
		}
            
        tries = tries-1; //decrement tries by one
        
	}
	if (!done) // if not done playing
	{
		cout << endl << "Out of tries. Pitiful. You lost obviously." << endl << endl; 
		cout << "Do you want to play again? Press Y/N." << endl << endl; 
		cin >> answer; 
		
		if (answer=='N' || answer=='n') 
		{
			playing = false; // game ends 
		
		}
	}
		
}
	
    return 0;	
}
    

