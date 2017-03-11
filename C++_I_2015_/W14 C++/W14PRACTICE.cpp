#include <iostream>
#include <fstream>

using namespace std;

int main()
{

const int size=6; 


for(int i = size - 1; i > 0; i--)
	{
		largest = 0;
		for(int j = 1; j <= i; j++)
		{
			if(ara[j] > ara[largest])
				largest = j;
		}
		temp = ara[largest];
		ara[largest] = ara[i];
		ara[i] = temp;
	}
	
}

