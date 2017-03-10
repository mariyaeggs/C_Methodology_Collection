#include <iostream>
#include "stacks.h"
#include "stacks.cpp"

using namespace std;

int main()
{
    Stack *stack = new Stack;
    // Adds to the stack
    int node1 = 1;
    int node2 = 2;
    int node3 = 3;
    int node4 = 4;
    int node5 = 5;
    int node6 = 6;
    int node7 = 7;
    int node8 = 8;
    int node9 = 9;
    int node10 = 10;

    stack->push(&node1);
    stack->push(&node2);
    stack->push(&node3);
    stack->push(&node4);
    stack->push(&node5);
    stack->push(&node6);
    stack->push(&node7);
    stack->push(&node8);
    stack->push(&node9);
    stack->push(&node10);

    // Get data from the stack
    cout << endl;
    cout << "Your initial stack: ";
    stack->getData();

    // Print out popped nodes
    cout << endl;
    cout << "Let's pop some nodes" << endl;
    cout << *(static_cast<int*>(stack->pop()))<< " node is poped\n";
    cout << *(static_cast<int*>(stack->pop()))<< " node is poped\n";

    // Display data again
    cout << endl << "New stack after popped node" << endl;
    stack->getData();
    cout << endl;

    return 0;
}

