//
// Created by Mariya Wilson on 8/17/16.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H
// Allows null
#include <cstdlib>
#include "linkedList.h"


class Node {

public:
    // Defines node
    Node(int val=0, Node* nPtr=NULL);
    // Sets data
    void setData(int val) { data = val; };
    // Sets link
    void setLink(Node* nPtr) {link = nPtr; };
    // Gets data
    int getData() const { return data; };
    // Gets link
    Node* getLink() const { return link; };

private:
    int data;
    Node* link;

};
// Node toolkit
void listHeadInsert(Node*& nPtr, int val);

#endif //LINKEDLIST_NODE_H
