// sprint.cpp
// Descrioption: grandfather's age?
// Author: Mariya Eggensperger
// Date: 10.19.2015
// Compiler: Dev-C++ 5.11

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
int i = 1,
    	j=1,
		age,
		age2;
bool ageGuessed=false; 
bool ageMultiple=false;
//	j = 1; // grandfather's secret age

while (ageGuessed==false)
{
 
    if (i % 3 == 1) 
    {
		if (i % 4 == 2)	
		{
			if (i % 5 == 4)
			{
				 age = i;
				 ageGuessed = true;	
			}
		}	                  
	}
i++; 
}
while (ageMultiple==false)
{
	if (j % 3 ==0)
	{
		if (j % 4 ==0)
		{
			if (j % 5 ==0)
			{
				age2=age+j; 
				ageMultiple=true; 
			}
		}
	}
j++;
}

cout << "Adding the LCM of 3,4,5 is:" << age2 << endl; 
cout << i << "\n"; 
cout << j << "\n";
cout << age << "\n"; 
cout << age2 << "\n"; 
return 0; 
}
