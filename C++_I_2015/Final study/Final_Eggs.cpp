#include <iostream>
#include <iomanip>
#include <cstddef>
#include <string>

using namespace std; 

class wage
{
	private:
		int employeeCount; // number of employees
		int emplNum; 
		string name; // employee name 
		int hoursWorked;	
		double payRate; 
		double totalPay; // individual pay
		double totalPayroll; // individual++ total pay
	
	public: 
		wage(); 
		wage(int employeeCount); // constructor
		~wage(); // destructor
		void setEmployee(int employeeCount); 
		int getEmployee(); // employee count
		void getData(string name, double hoursWorked, double payRate); 
		double calculatePay(string name, double hoursWorked,double payRate); 
		double calculatePayroll(double totalPayroll); 
		void showValues(); 
		
};
wage::wage()
{
	int employeeCount; 	
} 
wage::wage(int employeeCount)
{
	if (employeeCount<0)
	{
		cout << "Invalid employee count." << endl;
		cout << "Employee count has been set to 0."; 
	}
	else 
	{
		employeeCount=emplNum; 
	}
}
wage::~wage()
{
	cout <<"A wage object ended." << endl;
}
void wage::setEmployee(int emplNum)
{
	employeeCount=emplNum; 
	return;
}
int wage::getEmployee()
{
	return employeeCount; 	
}
void wage::getData(string name, double hoursWorked, double payRate)
{
	for (int i=0; i<100; i++)
	{
	cout << "What is the employee name? " << endl;
	getline(cin, name);
	
	cout << "How many hours did" << name << "work? " << endl;
	cin >> hoursWorked; 
	
	cout << "What is "<< name << "'s rate of pay? " << endl;
	cin >> payRate; 
	}
	return;
}
double wage::calculatePay(string name, double hoursWorked,double payRate)
{
	double overtime, 
		   tempPay,
		   totalPay;
		   
	for (int i=0; i<100; i++)
	{
		if(hoursWorked>40)
		{
			overtime=hoursWorked-40;
			tempPay=overtime*(payRate*1.5);
			totalPay=tempPay+(40*payRate); 
		}
		else
		{
			totalPay=hoursWorked*payRate; 
		}
	}
	return totalPay; 
}
double wage::calculatePayroll(double totalPayroll)
{
	for (int i=0; i<100; i++)
	{
		 return totalPayroll=totalPay++; 
		
	}
}
void wage::showValues()
{
	cout << name << "-" << endl;
	cout << "Rate of Pay: " << payRate << endl;
	cout << "Total Pay" << totalPay << endl << endl;
	cout << "Total Payroll" << totalPayroll << endl;
	
	return; 
}
int main()
{
	wage completeWage; 
	
	double empls; 
	
	completeWage.setEmployee(empls); 
	completeWage.showValues(); 
	
	system("Pause"); 
	return 0; 
}
