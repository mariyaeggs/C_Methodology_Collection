/*
|
|  This header file defines a Stack data type.
|
\*************************************************************************/

#ifndef STACK
#define STACK

/* Default Stack Functions:
* bool empty()
* void push()
* void display
* int/StackElement top()
* void pop()
*/

#include <iostream>

using namespace std;

const int STACK_CAPACITY = 128;
typedef int StackElement;

class Stack {

    public:
        // Constructor:
        Stack();
        // isEmpty:
        bool empty() const;
        // push():
        void push(const StackElement & value);
        // print():
        void display(ostream & out) const;
        // peek():
        StackElement top() const;
        // pop():
        void pop();
        // Get count of pushed elements:
        int getCount();
        // Reverses elements:
        void reverse();

    private:
        // stack data container:
        StackElement myArray[STACK_CAPACITY];
        // Peek value:
        int myTop;
};

#endif
