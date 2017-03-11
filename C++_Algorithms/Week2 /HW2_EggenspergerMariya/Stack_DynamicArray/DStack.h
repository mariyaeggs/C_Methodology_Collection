//----- DStack.h -----
#include <iostream>
using namespace std;

#ifndef STACKS_DYNAMICARRAY_DSTACK_H
#define STACKS_DYNAMICARRAY_DSTACK_H
/**
 * Title: Homework Assignment 2 : Stacks, Dynamic Array
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Header file defines the data for a program which
 * contains two stacks each size 10. When an element
 * is popped from the first stack, it's multiplied by 2
 * and added to the stack. When an element is popped
 * from the second stack, it's multiplied by 3 and
 * added to the first stack.
 *
 * @author Mariya Eggensperger
*/
typedef int StackElement;

class Stack {

public:
    /*--Function Members--*/
    Stack(int numElements = 140); // Constructor, stack object
    ~Stack(); // Deconstructor
    Stack(const Stack & original); // Copy constructor
    const Stack &operator = (const Stack & rightHandSide); // Assignemnt operator
    bool is_empty() const;
    void push(const StackElement & value);
    StackElement & top() const;
    int pop();
    void compute();

    void display(ostream & out) const;
    /*--------------------------------------------------------------------
    Display the contents of this dynamic array stack.
    Precondition: Ostream out is open
    Postcondition: Elements of this Stack have been output to out.
    --------------------------------------------------------------------*/

private:
    /*--Data Members--*/
    int myCapacity; // Capacity of the stack
    int myTop; // Top of the stack
    StackElement * myArray; // Dynamic array to store elements
}; // End of Stack class

#endif //STACKS_DYNAMICARRAY_DSTACK_H
