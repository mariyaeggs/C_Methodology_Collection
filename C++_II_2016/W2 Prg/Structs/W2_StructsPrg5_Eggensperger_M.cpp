// Name: Mariya Eggensperger
// Dev: C++ 5.1.1
// Week2 Structs Assignment: P.23, #16
// Write a program that will record information 
// about employees and compute their paychecks

#include <iostream>
using namespace std;

struct Employee
{
char lastName[20]; // Maximum of 20 characters for the last name
int hours[5], // Array stores five values for hours M-F
	rate, // Rate of pay	
	pay; // Final pay
};
void Initialize(Employee *initEmployee)
{
	cout<<"\nEnter last name : "; // Prompt for last name char[20]
	cin>>initEmployee->lastName; // Pointer
	cout<<"\nEnter Hourly rate : "; // Promt for rate integer
	cin>>initEmployee->rate; // Pointer
	for(int j=1;j<=5;j++) // Loop all employee hours 
	{
	cout<<"\nEnter hours for day"<<j<<" : ";
	cin>>initEmployee->hours[j]; 
	}
}
void Compute(struct Employee *computeEmployee) // Compute final pay
{
int workingTime=0; // Initialize working time set to zero
	for(int j=1;j<=5;j++) // Loop through one employee at a time
	{
	workingTime=workingTime+computeEmployee->hours[j]; 
	}
	if(workingTime>40) // If employee works greater than 40 hr., overtime pay is 1.5 *hourly rate
	{
	computeEmployee->pay=(computeEmployee->rate*40)+((workingTime-40)*computeEmployee->rate*1.5);
	}
	else // Do not pay overtime. Default pay
	{
	computeEmployee->pay=workingTime*(computeEmployee->rate);
	}
}
void computeAnswer(Employee resultEmployee) // Display answer 
{
	cout<<"\nLast Name : "<<resultEmployee.lastName;
	cout<<"\nPay : "<<resultEmployee.pay;
}
int main()
{
	int i,
	employeeNum;
	cout<<"Number of employees: ";
	cin>>employeeNum;
	Employee e[employeeNum];
	for(i=0;i<employeeNum;i++)
	{
	Initialize(&e[i]);
	}
	for(i=0;i<employeeNum;i++)
	{
	Compute(&e[i]);
	}
	for(i=0;i<employeeNum;i++)
	{
	computeAnswer(e[i]);
	}

return 0;
}

