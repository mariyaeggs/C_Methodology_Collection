// sprint.cpp
// Descrioption: Drink choice/output
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std; 

int main ()
{
	// changed switch to if /else 
	int drink,
		userChoice; 
		
	cout << "My favorite drinks: \n\n"; 
	cout << "1. Coke" << endl; 
	cout << "2. Sprite" << endl; 
	cout << "3. Coffee" << endl;
	cout << "4. H2O" << endl; 		
	cout << "5. Juice" << endl; 
	cout << "\n\nChoose a drink 1-5: "; 
	cin >> userChoice; 
	
	if (userChoice==1)
	{
	cout << "You chose Coke.";
	}
	else if (userChoice==2)
	{
	cout << "You chose Sprite.";
	}
	else if (userChoice==3)
	{
		cout << "You chose Coffee."; 
	}
	else if (userChoice==4)
	{
		cout << "You chose H2O.";
	}
	else if (userChoice==5)
	{
		cout << "You chose Juice."; 
	}
	else if (userChoice==0)
	{
		cout << "Error. Invalid choice.\n"
			 << "Here is your money back.";	
	}
	return 0;
}

	
//	 cin >> drink; 
//	
//	switch (drink) 
//	{  
//    case 1: cout << "You chose a coke" << endl;  
//    case 2: cout << "You chose a sprite." << endl; break;  
//    case 3: cout << "You chose coffee." << endl; break;  
//    case 4: cout << "You chose milk." << endl; break;  
//    case 5: cout << "You chose H2O." << endl; break;  
//    default:"Error. Choice not valid. Here is your money back.";  
//    }  
//}
