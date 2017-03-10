#include <iostream>
#include <algorithm>
#include "dynobag.h"


using namespace std;
    const dynobag::size_type dynobag::DEFAULT_CAPACITY; //30 allowed items

    dynobag::dynobag(size_type initial_capacity) {
        data = new value_type[initial_capacity];
        capacity = initial_capacity;
        used = 0;
    }

    dynobag::dynobag(const dynobag &source)

    {
        data = new value_type[source.capacity];
        capacity = source.capacity;
        used = source.used;
        copy(source.data, source.data + used, data);
    }

    dynobag::~dynobag() {
        delete[] data;
    }

    void dynobag::reserve(size_type new_capacity)

    {
        value_type *larger_array;

        if (new_capacity == capacity)
            return;

        if (new_capacity < used)
            new_capacity = used; // only add to memmory that which we use

        larger_array = new value_type[new_capacity];
        copy(data, data + used, larger_array);
        delete[] data;
        data = larger_array;
        capacity = new_capacity;
    }

    dynobag::size_type dynobag::erase(const value_type &target) {
        size_type index = 0;
        size_type many_removed = 0;

        while (index < used) {
            if (data[index] == target) {
                --used;
                data[index] = data[used];
                ++many_removed;
            }
            else
                ++index;
        }

        return many_removed;
    }

    bool dynobag::erase_one(const value_type &target) {
        size_type index; // target index
        index = 0;
        while ((index < used) && (data[index] != target))
            ++index;

        if (index == used) // target missing
            return false;

        --used;
        data[index] = data[used];
        return true;
    }

    void dynobag::insert(const value_type &entry) {
        if (used == capacity)
            reserve(used + 1);
        data[used] = entry;
        ++used;
    }

    void dynobag::operator+=(const dynobag &addend)

    {
        if (used + addend.used > capacity)
            reserve(used + addend.used);

        copy(addend.data, addend.data + addend.used, data + used);
        used += addend.used;
    }

    void dynobag::operator=(const dynobag &source);


