#include <iostream>
#include <iomanip>
using namespace std; 

int countIntegers(int number);  
int printScreen(int num, int count); 
void requestNumber(); // void

int countIntegers(int number) {
	int num = number; 
	int count = 0; // initialize count to zero
	
	while (number > 0) {
		number/=10; 
		count++; // increment count
	}
	printScreen(num, count); // pass not declare
	//cout << "The number " << num << " has " << count << " digits"; 
} 
int printScreen (int userInput, int numberCount) {
	cout << "\nHazaaaah! The number " << userInput << " has " << numberCount << " digits (intergalactic digits . . . ? We're still working on that).";
}
void requestNum() {
	
	int num; 
	
	cout << "Enter an integer: "; 
	cin >> num;
	
	if (num < 0) {
		num=num*(-1); 
	}
	countIntegers(num); 
}
int main () {

	requestNum(); // void
	
	return 0; 
}
