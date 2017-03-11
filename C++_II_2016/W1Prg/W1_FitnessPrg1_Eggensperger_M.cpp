#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//declare functions 
void showMembershipOptions(); //shows membership options
float getUserInput(); //gathers membership types
float membershipCost(float, float, float,float,int); 
float totalSum = 0; // total sum of all picked membership(s) 

int main () // main functions
{
	//call variables & functions
     float membershipCost;
     showMembershipOptions();
     //float totalSum = 0;
     getUserInput(); 
     membershipCost; 
     return 0;
}
void showMembershipOptions() //table of membership options 
{
      cout<<"\n --------Chualar Fitness Club Membership Menu--------\n" << endl;
      cout<< setw(40)<<"\t 1. Standard Adult Membership $40.00\n";
      cout<<"\t 2. Family Membership $80.00\n";
      cout<<"\t 3. Senior Membership $20.00\n";
      cout<<"\t 4. Corporate Membership $30.00\n";
      cout<<"\t 5. EXIT\n\n";      
}
float getUserInput() { //gathers membership types 1-5
	int membershipType; // selection of numbers 1-5
	int months; // membership duration
	//float totalSum;  
	float adultMembershipPrice = 40.00, 
		  familyMembershipPrice = 80.00, // <--- prices in U.S. Dollars
		  seniorMembershipPrice = 20.00,
		  corporateMembershipPrice = 30.00,
		  membershipCost; 
	bool inRangeType = false; 
	
	do {
		while (!inRangeType) {
			cout << "\nEnter your choice (1-5): ";
			cin >> membershipType;	
			if (membershipType < 1 || membershipType > 5){
				cout << "\nInvalid Choice. Try again.\n";
			} else {
				inRangeType = true; 
			}
		}
	} while (membershipType < 1 || membershipType > 5); {
		if (membershipType == 5) {
			cout << "\nDon't stay flab. Get swift-y!\n"; 
			cout << "\nGoodbye!"; 
			exit(0);
		} else {
			cout << "\nFor how many months: "; 
			cin >> months;
		}
		if (membershipType == 1) { 
			membershipCost = months*adultMembershipPrice;  	
		}
		if (membershipType == 2) {
			membershipCost= months *familyMembershipPrice; 
		}
		if (membershipType == 3) {
			membershipCost = months *seniorMembershipPrice; 
		}
		if (membershipType == 4) {
			membershipCost = months * corporateMembershipPrice; 
		}
		totalSum += membershipCost; 
		cout << "\nTotal charges: $ " << totalSum << endl;
	}
	//cout << "\nGOT HERE\n"; //test recursion
	return getUserInput(); 	
}

