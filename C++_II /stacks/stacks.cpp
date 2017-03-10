//
// Created by Mariya Eggensperger on 8/18/16.
//
#include <iostream>
#include "stacks.h"

using namespace std;

// Empty the stack
Stack::Stack() {
    start = NULL;
}
// Add to the stack
Stack::~Stack() {
    while(start) {
        Node *nd = start->next;
        delete start;
        start = nd;
    }
}
// Push
void Stack::push(void *data) {
    Node *nd = new Node;
    nd->data = data;
    nd->next = start;
    start = nd;
}
// Pop
void *Stack::pop() {
    void *data;
    if(start == NULL) return data;
    data = start->data;
    Node *nd = start;
    start = nd->next;
    delete nd;
    return data;
}
// Display changes and data
void Stack::getData() {
    Node *nd = start;
    while(nd) {
        cout << *(static_cast<int*>(nd->data)) << " " ;
        nd = nd->next;
    }
    cout << endl;
}


