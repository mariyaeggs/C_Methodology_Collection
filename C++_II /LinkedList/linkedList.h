//
// Created by Mariya Wilson on 8/17/16.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "node.h"

class linkedList
{
public:
    linkedList(Node* headPtr = NULL, int nodes = 0);
    void insert(int val);
    int showTop(){ return headPtr-> getData(); }
    int length() {return numNodes; }
private:
    Node* headPtr;
    int numNodes;

};

#endif //LINKEDLIST_LINKEDLIST_H
