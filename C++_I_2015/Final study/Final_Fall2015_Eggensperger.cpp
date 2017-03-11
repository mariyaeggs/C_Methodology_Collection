#include <iostream>
#include <iomanip>
#include <cstddef>
#include <string>

using namespace std; 


class Employee
{
private:
string name;
double hourlyrate;
double hoursworked;

public:
Employee();
Employee(string empName, double hoursW, double rate);

void getinfo();
double grosspay();
double overtime();
//double netpay();
void display();

};



// This stays the same, except float->double
double Employee::grosspay()
{
double gp =0;
gp = hoursworked * hourlyrate;
return gp;
}

// note return statement has moved
double Employee::overtime()
{
double ot=0;
double otpay=0;
if(hoursworked>40)
{
ot=hoursworked-40;
otpay = ot*1.5;
}
return otpay;
}

//double Employee::netpay()
//{
//return 
//}

void Employee::display()
{

cout<<name<<" "<< grosspay() <<" " <<endl;

}

// main returns an int. Really.
//void main()
int main()
{
Employee book(" ",0,5.5);
book.getinfo();
book.display();
}

