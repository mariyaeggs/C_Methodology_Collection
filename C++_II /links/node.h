//
// Created by Mariya Eggensperger on 8/17/16.
//

#ifndef LINKS_NODE_H
#define LINKS_NODE_H

struct Node {
private:
    // functions
    void initNode(struct Node *headPtr,int n); // Defines hPtr, node
    void insertNode(struct Node *headPtr, int n); // Inserts nodes into linked list
    void insertToFront(struct Node **headPtr, int n); // Inserts node to front of list

    struct Node *searchNode(struct Node *headPtr, int n); // Goes through and searches for a particular node
    bool deleteNode(struct Node **headPtr, Node *deletePointer); // Deletes a specific node NOT the list
    struct Node* reverseList(struct Node** headPtr); // Reverses linked list
    void copyList(struct Node *node, struct Node **newPointer); // Copying linked list
    int compareList(struct Node *n1, struct Node *n2); // Compares the nodes in list(s)

    void deleteList(struct Node **node); // Deletes entire list
    void display(struct Node *headPtr); // Displays the items in the dynamic lit
public:
    int data; // Data
    Node* next; // Next node in the list
};

#endif //LINKS_NODE_H
