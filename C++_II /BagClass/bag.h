//
// Created by Mariya Wilson on 7/25/16.
//

#ifndef BAGCLASS_BAG_H
#define BAGCLASS_BAG_H

#include <stdatomic.h>

class bag {

public:

    static const int CAPACITY = 30;
    bag() {used =0;}
    void insert(int);
    bool removeOne(const int target);
    int removeAll(const int target);
    int getValue(int);
    int size() { return used;};


private:
    int data[CAPACITY];
    int used;
};

#endif //BAGCLASS_BAG_H
