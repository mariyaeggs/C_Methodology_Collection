//
// Created by Mariya Wilson on 8/17/16.
//

#include "node.h"

using namespace std;

linkedList::linkedList(Node* hPtr, int nodes) {

    headPtr=hPtr;
    numNodes =nodes;
}

void linkedList::insert(int val) {
    listHeadInsert(headPtr, val);
    numNodes++;
}
