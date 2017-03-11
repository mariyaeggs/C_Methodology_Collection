
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void calculate_grade(int, int, int, int, int);
void calculate_letter(char, char, char, char, char); 
// call variables
int ninetytoHundred, 
eightytoEightynine, 
seventytoSeventynine, 
sixtytoSixtynine, 
sixty,
percent_grade;
 
char letter_A='A', 
	 letter_B='B',
	 letter_C='C', 
	 letter_D='D', 
	 letter_F='F'; 

	 
	 
	

int main() // main function
{

 cout << "Enter grade: "; // input cents
 cin >> percent_grade;
 
 // function calls
calculate_grade(ninetytoHundred, eightytoEightynine,seventytoSeventynine, sixtytoSixtynine, sixty);
calculate_letter(letter_A, letter_B, letter_C, letter_D, letter_F);  
 
 cout << "\n" << percent_grade << " can be given as: \n";

 //cout << "\n" <<  << " letter"; 

 
}
void calculate_grade(int ninetyHundred, int eightyEightynine, int seventySeventynine, int sixtySixtynine, int sixty)   
{
 	
 	if (percent_grade>90 && percent_grade<=100)
	 {
	 	cout<< letter_A; 
	 	return; 
	  } 
	  else if (percent_grade>80 && percent_grade<=89)
	  {
	  	cout << letter_B; 
	  	return;
	  }
	  else if (percent_grade>70 && percent_grade<=79)
	  {
	  	cout << letter_C; 
	  	return;
	  }
	  else if (percent_grade>60 && percent_grade<=69)
	  {
	  	cout << letter_D;
		return; 
	  }
	  else if (percent_grade<=60)
	  {
	  	cout << letter_F; 
	  	return;
	  }
	
	return; 
 			
}

