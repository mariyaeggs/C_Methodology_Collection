//----- Stack.h -----
#include <iostream>

#ifndef LAB2_EGGENSPERGER_MARIYA_STACK_H
#define LAB2_EGGENSPERGER_MARIYA_STACK_H
/**
 * Title: Lab 2 Submission : Stacks
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Header file defines the data for a stack program.
 *
 * @author Mariya Eggensperger
*/
const int STACK_CAPACITY = 128;
typedef int StackElement;

class Stack
{
public:
    /***** Function Members *****/
    /***** Constructor *****/
    Stack();
    /*------------------------------------------------------------------------
      Construct a Stack object.

      Precondition:  None.
      Postcondition: An empty Stack object has been constructed (myTop is
          initialized to -1 and myArray is an array with STACK_CAPACITY
          elements of type StackElement).
     -----------------------------------------------------------------------*/

    bool empty() const;
    /*------------------------------------------------------------------------
      Check if stack is empty.
      Precondition: None
      Postcondition: Returns true if stack is empty and false otherwise.
     -----------------------------------------------------------------------*/

    void push(const StackElement & value);
    /*------------------------------------------------------------------------
      Add a value to a stack.

      Precondition:  value is to be added to this stack
      Postcondition: value is added at top of stack provided there is space;
           otherwise, a stack-full message is displayed and execution is
           terminated.
     -----------------------------------------------------------------------*/

    void display(ostream & out) const;
    /*------------------------------------------------------------------------
      Display values stored in the stack.

      Precondition:  ostream out is open.
      Postcondition: Stack's contents, from top down, have been output to out.
     -----------------------------------------------------------------------*/

    StackElement top() const;
    /*------------------------------------------------------------------------
      Retrieve value at top of stack (if any).

      Precondition:  Stack is nonempty
      Postcondition: Value at top of stack is returned, unless the stack is
          empty; in that case, an error message is displayed and a "garbage
          value" is returned.
     -----------------------------------------------------------------------*/

    void pop();
    /*------------------------------------------------------------------------
      Remove value at top of stack (if any).

      Precondition:  Stack is nonempty.
      Postcondition: Value at top of stack has been removed, unless the stack
          is empty; in that case, an error message is displayed and
          execution allowed to proceed.
     -----------------------------------------------------------------------*/

    static int countSubStr(char txt_str[]);

private:
    /***** Data Members *****/
    StackElement myArray[STACK_CAPACITY];
    int myTop;
}; // end of class declaration

#endif //LAB2_EGGENSPERGER_MARIYA_STACK_H