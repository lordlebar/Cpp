//
//  vector.cpp
//  Cartesian_Vector
//
//  Created by Corentin Lebarilier on 9/30/22.
//

#include "vector.hpp"

Vector::Vector(){

}

Vector::Vector(std::initializer_list<int> list){
        std::cout << "constructed with a " << list.size() << "-element list\n";
}

Vector& Vector::operator+=(const Vector& rhs){

}


Vector& Vector::operator+(const Vector& rhs){

}
