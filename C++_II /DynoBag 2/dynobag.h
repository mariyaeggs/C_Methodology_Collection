//
// Created by Mariya Eggensperger on 8/11/16.
//
#ifndef DYNOBAG_DYNOBAG_H
#define DYNOBAG_DYNOBAG_H

using namespace std;

    class dynobag
    {
    public:
    // typedef
        typedef int value_type;
        typedef size_t size_type;
        static const size_type DEFAULT_CAPACITY = 30;
    // constructors, destructors
        dynobag(size_type initial_capacity = DEFAULT_CAPACITY);
        dynobag(const dynobag& source);
        ~dynobag( );
    // bag class modifiers
        void reserve(size_type new_capacity);
        bool erase_one(const value_type& target);
        size_type erase(const value_type& target);
        void insert(const value_type& entry);
        void operator +=(const dynobag& addend);
        void operator=(const dynobag &source);
        void operator -=(const dynobag& subtrahend);

        size_type size( ) const { return used; }
        size_type count(const value_type& target) const;
    private:
        value_type *data; // pointer to data
        size_type used; // items used in the bag
        size_type capacity; // bag capacity
    };

    // outside functions
    dynobag operator +(const dynobag& b1, const dynobag& b2);
    dynobag operator -(const dynobag& b1, const dynobag& b2);
    dynobag & dynobag:: operator=(const dynobag &s); // not sure if I got this correct...

#endif //DYNOBAG_DYNOBAG_H
