#include "vector.hh"

    Vector::Vector(){
        _x = 0;
        _y = 0;
    }

    Vector::Vector(std::initializer_list<int> list){
        std::cout << "constructed with a " << list.size() << "-element list\n";
    }
