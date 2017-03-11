// Week5.cpp
// Description: From Textbook. Page 201 # 12
// A bookstore summarizes its monthly transactions by keping the info for each book in stock: 
// write a C+= program that accepts this data for each book and then displays the boks ID nubmer 
// and an updated book inventory balance, using the relationship.
// Author: Mariya Eggensperger
// Date: 10.5.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

// a table showing the depreciation of a purchased machine during a 7-year span.

int main () //initialize main function
{
	// declare any constants
	
	const int MAX_BOOKS=3; 
	
	//declare all  variables 
	
	int                                                                                                                                                                                                                                    start, //starting value
		id, // book identification number
		numReceived, // # books received during month
		numSold,  // # books sold during month
		startBalance, // inventory balance at beginning of month
		count=1, // decriment by a count of 1
		newBalance; // equals initial inventory balance + copies received - copies sold
	
	
	cout << "Enter data for " << MAX_BOOKS << " books: ";
	 	 
	while (count <= MAX_BOOKS) // program will stop end after three books have been entered
    {
    
		cout << "Enter book " << count << " ID: "; // prompt user for book ID
		cin >> id; 
		cout << "Enter initial monthly balance: "; // prompt user for initial book balance
		cin >> startBalance; 
		cout << "Enter number of books received at the beginning of the month: "; // prompt user for number of books received
		cin >> numReceived; 
		cout << "Enter the number of books sold during the month: "; // prompt user for number of books sold
		cin >> numSold; 
		
		newBalance=startBalance+numReceived-numSold; // relationship equation
		 
		cout << "Your new book inventory for Book " << id << " is now " << newBalance << endl; // ending cout statement
		
		count++; // increment code equations by 1
	}			 
	return 0;	// end program
}
