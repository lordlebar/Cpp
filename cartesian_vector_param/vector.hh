//
//  vector.chh
//  Cartesian_Vector
//
//  Created by Corentin Lebarilier on 9/30/22.
//

#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<value> l);

    size_t size() const;

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    // More to go
    Vector& operator-=(const Vector& rhs);
    Vector& operator+=(value v);
    Vector& operator*=(value v);

    Vector operator+(const Vector& rhs) const;
    Vector operator+(value v) const;
    value operator*(const Vector& rhs) const;
    Vector operator*(value v) const;

    value& operator[](size_t idx);
    value operator[](size_t idx) const;

private:
// Private Member functions here (if necessary)
    value data[NDIM];
    size_t vector_size;
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
Vector operator*(const value& s, const Vector& v);
Vector operator+(const value& s, const Vector& v);
std::ostream& operator<<(std::ostream& o, const Vector& v);
