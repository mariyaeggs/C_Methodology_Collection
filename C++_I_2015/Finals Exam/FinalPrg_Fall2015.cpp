#include <iostream>		//including library (directive header file)
#include <windows.h>	//makes console look pretty
#include <fstream>		//Library to read files
#include <iomanip>
using namespace std;
void getData(char[], double[], double[], int)

const int size=100; 

int main() {
	
	SetConsoleTitleW(L"Payroll System");	//Set Console Title
	
	char name[size];  
	
	int hoursworked[size] = {0};
	 
	double hourlyrate[size] = {0.0}, 
			grossPay[size] = {0.0}, 
			payroll[size] = {0.0}, 
			overtime[size]= {0.0}, 
			overtimePay[size]= {0.0},
			genPay[size]= {0.0};
			
	int i = 0;
	
	cout << setw(7) << "FIRST NAME" <<setw(14) << "HOURS WORKED" << setw(14) << "RATE OF PAY" << setw(12) << "TOTAL PAY" << setw(12) << "TOTAL PAYROLL" << endl << endl;
	
	cin >> name[i]>> hoursworked[i]>> hourlyrate[i];  

	while (cin >> name[i]>> hoursworked[i] >> hourlyrate[i])
	{
			if (hoursworked[i] > 40)
			{
				overtime[i] = hoursworked [i] - 40;
			}
			overtimePay[i] = overtime[i] * hourlyrate[i] * 1.5;
			genPay[i] = (hoursworked[i] - overtime[i]) * hourlyrate[i]; 
			grossPay[i] = genPay[i] + overtimePay[i];
			payroll[i]=grossPay[i]; 
			}		
			cout<< setw(7)<< name[i] <<setw(14)<< hoursworked[i] <<setw(14)<< hourlyrate[i] << setw(14)<< grossPay[i]<<setw(14)<<payroll[i]<<endl;
			i++;
			
	cout << "\n";								 //Creates 	space
	return 0;
}
	 

		
	

