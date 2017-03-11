//----- Stack.cpp -----
#include <iostream>
#include <cstdio>
using namespace std;

#include "Stack.h"
/**
 * Title: Lab 2 Submission : Stacks
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Driver file for a stacks program.
 *
 * @author Mariya Eggensperger
*/
void input_user_str(string input, Stack & s);
void input_user_binary(int position, Stack & s);

int main()
{

   /*Lab Exercise Part a)
    * The program can read a sequence of characters
    * and reverse it using the stack.*/

   Stack s;
   Stack stack_of_remainders;

   cout << endl;

   cout << "----------------------- Lab Part A -----------------------";
   cout << "\nStack created. Empty? " << boolalpha << s.empty() << endl;

   char user_str[STACK_CAPACITY];
   string reverse_str = ""; // Stores user input and reverses

   cout << "Enter a string => ";
   cin.getline(user_str, STACK_CAPACITY);
   for (int i = 0; i < STACK_CAPACITY; i++)
   { // Loop through user input
      user_str[i] = toupper(user_str[i]); // Transform user input to uppercase letters
   }
   cout << "You entered " << user_str;
   if (isalpha(( char ) *user_str))
   {
      puts(" (Letters)");
      //Call on input_user_str function to store new input
      input_user_str(user_str, s);
      while (!s.empty())
      {
         reverse_str += s.top();
         s.pop();
      }
      cout << "Reverse is " << reverse_str;
      cout << endl;
   }
   else if (isdigit(( char ) *user_str))
   {
      puts(" (Digits)");
      exit(1); // Terminate program
   } else
   {
      puts(" (Symbols)");
      exit(1); // Terminate program
   }

   /*Lab Exercise Part b)
    * The program can convert a positive integer
    * to a binary representation.*/

   char binary_rep[STACK_CAPACITY];
   unsigned number;

   cout << endl;
   cout << "----------------------- Lab Part B -----------------------";
   do
   {
      cout << "\nEnter a number: ";
      cin >> number;
      if(number<=0)
      {
         cout << "\n(Invalid integer input.)";
         exit(1);
      }
   }
   while(number<=0);
   {
      cout << "Decimal: " << number;

      input_user_binary(number, stack_of_remainders);
      cout << "\nBinary: ";
      stack_of_remainders.display(cout);
      cout << endl;
   }

}
// Adds user input into temp string storage
void input_user_str(string input, Stack &s)
{
   for (char user_char : input)
   {
      s.push(user_char);
   }
}
// Adds user int to temp storage
void input_user_binary(int number, Stack & stack_of_remainders)
{
   unsigned remainder;
   while(number!=0)
   {
      remainder = number % 2;
      stack_of_remainders.push(remainder);
      number /=2;
   }
}
/*--------------------- OUTPUT BEGIN ---------------------



--------------------**** Run 1 ****----------------------

----------------------- Lab Part A -----------------------
Stack created. Empty? true
Enter a string => csumb
        You entered CSUMB (Letters)
Reverse is BMUSC


----------------------- Lab Part B -----------------------
Enter a number: 5
Decimal: 5
Binary: 101



--------------------**** Run 2 ****----------------------

----------------------- Lab Part A -----------------------
Stack created. Empty? true
Enter a string => psuf
You entered PSUF (Letters)
Reverse is FUSP

----------------------- Lab Part B -----------------------
Enter a number: 26
Decimal: 26
Binary: 11010




//--------------------- OUTPUT END ---------------------*/

