#pragma once

#include <iostream>
#include <ostream>
#include <initializer_list>

#include "config.h"

class Vector
{

    private:
    // Private Member functions here
        value data[NDIM];
    // Member variables are ALWAYS private, and they go here

    public:
    // DO NOT CHANGE THIS
        Vector(const Vector&) = default;
        Vector& operator=(const Vector&) = default;
        ~Vector() = default;
    //

    // Add suitable constructors
        Vector();
        Vector(std::initializer_list<int> values);
        // possibly more

    // Public Member functions here
        Vector& operator+=(const Vector& rhs);
        // Vector& operator-=(const Vector& rhs);
        // Vector& operator*=(const Vector& rhs);
        Vector& operator+(const Vector& rhs);
        // Vector& operator-(const Vector& rhs);
        // Vector& operator*(const Vector& rhs);
        // More to go
};

// Nonmember function operators go here