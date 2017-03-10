// Mariya Eggensperger
// CSIS46, Pof. P. Wiese

#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include "bag.h"
using namespace std;

//const bag::size_type  bag::CAPACITY;

// Retrieves value of returned items
int bag::getValue(int element) {
    assert(element>=0 && element < CAPACITY);
    return data[element];
}
// Removes all items from the bag
bag::size_type bag::removeAll(const value_type &target) { // removeAll can also use the function used=0;
    size_type index = 0;
    size_type removed= 0;
    while (index < used) {
        if (data[index]==target) {
            --used;
            data[index] =data[used];
            removed++;
        } else {
            index++;
        }
    }
    return removed;
}
// Removes one item from the bag with Boolean returns
bool bag::remove_one(const value_type &target) {
    size_type  index;
    index = 0;
    while ((index < used) && (data[index] != target)) {
        index++;
        if (index == used) {
            return false;
        }
    }
    --used;
    data[index] =data[used];
    return true;
}
// Adds one item to the bag
void bag::insert(const value_type& item) {
    assert(size() <CAPACITY);
    data[used] = item;
    used++;

}
bool bag::insertWithBool(const value_type& boolItem) {
    size_type index;
    index=0;
    if (size() < CAPACITY) {
        //assert(size() <CAPACITY);
        data[used]=boolItem;
        used++;
        cout << "TRUE";
        return true;
    }
    else {
        return false;
    }

}
void bag::insertSeveral(const value_type& items) {
    assert(size() < CAPACITY);
    for (int i=0; i<used; i++) {
        data[used] = items;
        used++;
    }
}
// Adds two bags and makes a third bag
void bag::operator+=(const bag& addend) {
    assert(size()+addend.size()<=CAPACITY);
    copy(addend.data, addend.data+addend.used, data+used);
    used += addend.used;
}
bag::size_type  bag::count(const value_type& target) const {
    size_type type;
    size_type i;
    type=0;
    for (i=0; i<used; i++) {
        if (target== data[i])
            type++;
    }
    return type;
}
bool bag::compare(const bag &first_bag, const bag &second_bag) {
        int i,j;
        for(i=0;i<CAPACITY;i++){
            for(j=0;j<CAPACITY;j++){
                if(first_bag[i]==second_bag[j])
                    return true;
                cout << "true" << endl;
            }
        }
        return false;
}
bag operator +(const bag& b1, const bag& b2) {
    bag answer;
    assert(b1.size()+b2.size() <=bag::CAPACITY);
    answer +=b1;
    answer += b2;
    return answer;

}





