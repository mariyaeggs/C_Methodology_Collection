// conditionif.cpp
// Description : Demonstrate mastery of the 'if' condition. Part I
// Author: Mariya Eggensperger
// Date: 09.21.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
using namespace std;

int main()
{

	int num1,num2=18;
	int totalBus;
	
	cout << "How many students will be attending the NASA field trip?  ";
	cin >> num1;
	
	totalBus= (num1/num2)+(num1 % num2);
	
	if (num1<0)
		cout <<"\nError, please input a positive number.\n";
	if (num1==0)
		cout <<"\nYou do not have anyone going on this field trip.\n";
	if (num1>=18)
		cout << "\nYou will need, "<< totalBus << " bus(es) for the field trip.\n";
	if (num1<18 && num1>0)
		cout << "\nYou need 1 bus for the field trip.\n";
		int value(0);
	while (!(std::cin >> num1)) 
    std::cout << "You entered a non-digit character\n"; //I didn't know how to elliminate the non-integer inputs, so this was a recommended
    //code injection. I don't understand however, why it outputs more than one cout variable(?)
		
	return 0;

}
