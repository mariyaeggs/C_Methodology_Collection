#include <iostream>
// missing using namespace std; 
using namespace std; 

int main()
{
float start, 
	 stop = 5; // stops at 5

cout << "What number should I start with? " ; // missing end quotation and false ; // syntax for cout should be cout <<
cin >> start;

cout <<"What number should I end with?  ";  // missing an ending ; 
cin >> stop; // should be cin >> stop

while (start < stop) // this should be start is less than or equal to stop=5
{
	cout << start << endl; // include an endl; 
	start++; //change this to increment float start by a series of one
}
return 0; 
}

// missing ending bracket
// missing return 0;
