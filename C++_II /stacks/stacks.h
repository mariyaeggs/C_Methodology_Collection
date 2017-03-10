//
// Created by Mariya Wilson on 8/18/16.
//

#ifndef STACKS_STACKS_H
#define STACKS_STACKS_H

class Stack
{
public:
    Stack();
    ~Stack();
    void push(void *data);
    void *pop();
    void getData();

protected:
    typedef struct Node {
        struct Node *next;
        void *data;
    } Node;

    Node *start;
};

#endif //STACKS_STACKS_H
