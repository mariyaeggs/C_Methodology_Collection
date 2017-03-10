// Mariya Eggensperger
// CSIS46, Pof. P. Wiese

#ifndef BAG_CLS_BAG_H
#define BAG_CLS_BAG_H

#include <cstdio>

class bag {
public:
    typedef int value_type;
    typedef std::size_t  size_type;
    // Bag(s) maximum capacity
    static const size_type CAPACITY = 30; //Maximum size of the array

    // Set bag to initial empty
    bag() {used =0;}// Constructor sets used to zero
    size_type removeAll(const value_type& target); // Removes all values from a bag
    bool remove_one(const value_type& target); // Removes one value from a bag
    void insert(const value_type& item); // Inserts one value into bag
    void insertSeveral(const value_type& item); // Inserts several items into the bag
    void operator +=(const bag& addend); // Union of two bags
    size_type size() const {return used; }; // The items used in the bag
    size_type count(const value_type& target) const;
    int getValue(int); // Displays value of items in the bag

    bool insertWithBool(const value_type& boolItem); // Checks to see if the Bag is full, if not, adds the value passed to end of array
    bool compare(const bag& b1, const bag& b2);


private:
    value_type  data[CAPACITY]; // Holds the values entered into the bag
    size_type used; // Data of how many values have been entered in the bag

};
bag operator+(const bag& b1, const bag& b2); // Combines two bags into a third bag

#endif //BAG_CLS_BAG_H
