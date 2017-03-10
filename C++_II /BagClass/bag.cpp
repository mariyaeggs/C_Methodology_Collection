//
// Created by Mariya Wilson on 7/25/16.
//

#include <cassert>
#include "bag.h"


using namespace std;

void bag::insert(int value) {
    assert(used < CAPACITY);
    data[used] = value;
    used++;
    return;
}
bool bag::removeOne(const int target) {
    if (used==target) {
        //cout << "There is no such number";
        return false;
    } else {
       // cout << "The number is removed";
        assert(used<CAPACITY);
        data[used--]= target;
    }
    return true;
}
int removeAll(const int target) {
    used == 0;
    return 0;
}
int bag::getValue(int element) {
    assert(element>=0 && element < CAPACITY);
    return data[element];
}
