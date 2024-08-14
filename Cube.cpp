
#include "Cube.h"
#include <iostream>
#include <vector>


namespace uiuc {
    Cube::Cube() {   // custom default constructor
        length_ = 1; // initialize variable
        std::cout << "Default constructor invoked!" << std::endl;
    }

    Cube::Cube(double length) { //one arg constructor
        length_ = length;
        std::cout << "Created $" << getVolume() << '\n';
    }

    Cube::Cube(const Cube& obj){ //custom copy constructor
        length_ = obj.length_;   //takes an obj and copys the content into current instance
        std::cout << "Copy constructor invoked!" << std::endl;
        std::cout << "Created $" << getVolume() << "via copy" << '\n';
     }

    Cube & Cube::operator=(const Cube& obj) { // copy assignment operator
        length_ = obj.length_;
        std::cout << "Assignment operator invoked!" << '\n';
        //std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << '\n';

        length_ = obj.length_;
        return *this; // returns an instance of the class
    }

    // Copy Constructors

    // passing an obj as a parameter (by value)
    // returning an obj from a function (by value)

    // Custom Copy Constructor
    // -is a class constructor
    // -has exactly one argument
    // -the arg must be a const reference of the same type as the class


    void foo(Cube cube){
        //empty
    }

    double Cube::getVolume() {
        return length_ * length_ * length_;
    }

    double Cube::getVolume(const Cube& obj) {
         return length_ * length_ * length_;

    }

    double Cube::getSurfaceArea() {
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length) {
        length_ = length;
    }
}

