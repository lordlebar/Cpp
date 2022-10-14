//
//  vector.cpp
//  Cartesian_Vector
//
//  Created by Corentin Lebarilier on 9/30/22.
//

#include "vector.hpp"

Vector::Vector(){
    for (int i = 0; i < NDIM; i++){
        vector[i] = 0;
        //std::cout << "vector Constuctor: " << vector[i] << std::endl;
    }
}

Vector::Vector(std::initializer_list<int> list){
    std::initializer_list<int>::iterator i;
    int val = 0;
    for (i = list.begin(); i != list.end(); i++){
        vector[val++] = *i;
        //std::cout << "vector Constructor_list: " << vector[val-1] << std::endl;
    }
    // std::cout << "constructed with a " << list.size() << "-element list\n";
}


Vector& Vector::operator+=(const Vector& rhs){
    for (int i = 0; i < NDIM; ++i){ 
        vector[i] += rhs.vector[i];
    }
    return *this;
}

Vector& Vector::operator+=(int val){
    for (int i = 0; i < NDIM; i++){ 
        vector[i] += val;
    }
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs){
    for (int i = 0; i < NDIM; ++i){ 
        vector[i] -= rhs.vector[i];
    }
    return *this;
}

Vector& Vector::operator*=(const Vector& rhs){
    for (int i = 0; i < NDIM; i++){ 
        vector[i] *= rhs.vector[i];
    }
    return *this;
}

Vector& Vector::operator*=(const int& val){
    for (int i = 0; i < NDIM; i++){ 
        vector[i] *= val;
    }
    return *this;
}


Vector& Vector::operator+(const Vector& rhs){
    auto v = Vector{rhs};
    return v += *this;
}

Vector& Vector::operator-(const Vector& rhs){
    auto v = Vector{rhs};
    return v -= *this;
}

Vector operator*(const Vector& rhs, int val){
    auto v = Vector{rhs};
    int* data = Vector{rhs}.getValues();
    for (int i = 0; i <= NDIM; i++){
        v[i] += (val - 1) * data[i];
    }
    return v;
}

int& Vector::operator*(const Vector& rhs){
    auto v = Vector{rhs};
    auto vec = (v *= *this);
    //std::cout << vec << std::endl;
    for (int i = 1; i < NDIM; i++){
        *vec.getValues() += vec[i];
    }
    return *vec.getValues();
}

int& Vector::operator[](int rhs){
    return vector[rhs];
}

std::ostream& operator<<(std::ostream& OsPrint, const Vector& rhs)
{
    int i = 0;
    OsPrint << "{";
    int* data = Vector{rhs}.getValues();
    while (i < NDIM - 1){
        OsPrint << data[i] << ",";
        i++;
    }
    OsPrint << data[i] << "}";
    return OsPrint;
}

int *Vector::getValues(){
    return vector;
}