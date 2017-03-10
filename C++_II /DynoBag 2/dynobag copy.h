//
// Created by Mariya Wilson on 8/11/16.
//

#ifndef DYNOBAG_DYNOBAG_H
#define DYNOBAG_DYNOBAG_H

using namespace std;
namespace main_savitch_4
{
    class bag
    {
    public:
// TYPEDEFS and MEMBER CONSTANTS
        typedef int value_type;
        typedef size_t size_type;
        static const size_type DEFAULT_CAPACITY = 30;
// CONSTRUCTORS and DESTRUCTOR
        bag(size_type initial_capacity = DEFAULT_CAPACITY);
        bag(const bag& source);
        ~bag( );
// MODIFICATION MEMBER FUNCTIONS
        void reserve(size_type new_capacity);
        bool erase_one(const value_type& target);
        size_type erase(const value_type& target);
        void insert(const value_type& entry);
        void operator +=(const bag& addend);
        void operator =(const bag& b1, bag& b2) const ;
        void operator -=(const bag& subtrahend);
// CONSTANT MEMBER FUNCTIONS
        size_type size( ) const { return used; }
        size_type count(const value_type& target) const;
    private:
        value_type *data; // Pointer to partially filled dynamic array
        size_type used; // How much of array is being used
        size_type capacity; // Current capacity of the bag
    };

// NONMEMBER FUNCTIONS for the bag class
    bag operator +(const bag& b1, const bag& b2);
    bag operator -(const bag& b1, const bag& b2);
}


#endif //DYNOBAG_DYNOBAG_H
