//
// Created by Mariya Wilson on 8/17/16.
//
#include <iostream>
#include "node.h"
#include "linkedList.h"

Node::Node(int val, Node* nPtr) {
    data = val;
    link = nPtr;
}
void listHeadInsert(Node*& nPtr, int val) {

    Node* tPtr = new Node(val, nPtr);
    nPtr=tPtr;

}

