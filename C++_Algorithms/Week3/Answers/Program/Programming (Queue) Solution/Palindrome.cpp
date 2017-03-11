
/* Abstract: Stack and Queue classes used as a tool to determine if a string  */
/* is a palindrome.                                                           */
/******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"
#include "Stack.h"

bool isPalindrome(string inputString)
{
   int stringLength = inputString.length(); //for loop control
   int halfLength = 0; //for loop control
   char compare1, compare2; //for char comparison
   Stack stringStack; //to hold chars from inputString
   Queue stringQueue; //to hold chars from inputString
   
   if (stringLength < 1) //if empty string was provided
   {
      cout << "ERROR:  You have not entered any characters.\n";
      return false;
   }

   //add string to a queue and a stack for comparison
   for (int i = 0; i < stringLength; i++)
   {
      //add alpha numeric chars to stack and queue & increment int variable
      if (isalnum(inputString[i]))
      {
         stringStack.push(toupper(inputString[i]));
         stringQueue.enqueue(toupper(inputString[i]));
         halfLength++;
      }
   }
   
   //halfLength is half of the size of the string without spaces
   halfLength /= 2;
   
   //if string did not include at least 1 alpha numeric character
   if (stringStack.empty()) 
   {
      cout << "ERROR: You have not entered enough relevant characters.\n";
      return false;
   }

   //compare the end of the string to the beginning using stack and queue
   for (int i = 0; i < halfLength; i++) //compare only required for half
   {
      compare1 = stringStack.top();
      compare2 = stringQueue.front();
      if (compare1 != compare2)
      {
         return false;
      }
      stringStack.pop();
      stringQueue.dequeue();
   }
   return true;
}

int main()
{
   string inputString;
   //continue to take user input until they decide to quit
   do {
      cout << "Enter a string (type EXIT to quit): ";
      getline(cin, inputString);
      cout << "You entered " << inputString << endl;
      for (int i = 0; i < inputString.length(); i++)
      {
         inputString[i] = toupper(inputString[i]);
      }
      if (inputString == "EXIT") //user typed exit
      {
         break; //break from while loop
      }
      (isPalindrome(inputString)) ? (cout << "This string is ") : (cout << "This string is not ");
      cout << "a palindrome.\n\n";
   }
   while (inputString != "EXIT");

   return 0;
}
