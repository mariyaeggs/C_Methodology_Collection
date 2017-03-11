#include <iostream>
#include <cmath>
#include <math.h>
using namespace std; 

int main ()
{
	double loanAmount; 
	int NumofYears; 
	
	cout << "Enter loan amount: "; 
	cin >> loanAmount; 
	cout << "Enter number of loan years: "; 
	cin >> NumofYears; 
 
	double annualInterestRate = 5.0;
	
	cout << "Interest Rate     Monthly Payment     Total Payment"; 
	
  while (annualInterestRate <= 8.0) 
  {
  
  	double monthlyInterestRate,
  		   monthlyPayment,
  		   totalPayment,
  		   annualInterestRate; 
  		   
	monthlyInterestRate = annualInterestRate / 1200;
    monthlyPayment = loanAmount* monthlyInterestRate/ (1 - 1 /std::pow(monthlyInterestRate, NumofYears*12));
   
    totalPayment = monthlyPayment * NumofYears * 12;
   
   cout << annualInterestRate << monthlyPayment << totalPayment; 
   
   annualInterestRate = annualInterestRate+1.0/8; 
 
 }
 return 0; 
}
