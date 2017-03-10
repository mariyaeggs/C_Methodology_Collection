#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void compute_quarters(int, int&, int&);
void compute_dimes(int, int&, int&);
void compute_pennies(int, int&, int&); 

// call variables
int	num, 
	amount_left_quarters, 
	amount_left_dimes,
	amount_left_pennies, 
	coin_value_quarters=25, 
	coin_value_dimes=10, 
	coin_value_pennies=1; 

int main() // main function
{

 cout << "Enter amount of change: "; // input cents
 cin >> num;
 
 // function calls
 compute_quarters(25, num, amount_left_quarters);
 compute_dimes(10, num, amount_left_dimes);
 compute_pennies(1, num, amount_left_pennies);  
 
 cout << "\n" << num << " can be given as: \n"; 
 cout << "\n" << amount_left_quarters << " quarter(s) " << amount_left_dimes << " dime(s) "; 
 cout << amount_left_pennies << " penny (pennies) " << endl << endl; 
 
}
void compute_quarters(int coin_value_quarters, int& num, int& amount_left_quarters)  
{
 	
 	amount_left_quarters=num/coin_value_quarters; 
	
	return; 
 			
}
void compute_dimes(int coin_value_dimes, int& num, int& amount_left_dimes)
{
	amount_left_dimes=((num-(amount_left_quarters*coin_value_quarters)))/(coin_value_dimes);
	
	return;  
}
void compute_pennies(int coin_value_pennies, int& num, int& amount_left_pennies)
{
	amount_left_pennies=((num-((amount_left_quarters*coin_value_quarters)+(amount_left_dimes*coin_value_dimes)))); 
	
	return; 
}


