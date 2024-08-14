
#include "Cube.h"
#include <iostream>


bool sendCube(uiuc::Cube *c) {


    return true;
}

int main()
{
    using namespace uiuc;
    using std::cout;
    using std::endl;


    //Cube c; // default constructor
    //foo(c); // copy constructor

    //Cube myCube = c; // copy constructor

    //Cube c2;      // default
    //Cube myCube2; // default
    //myCube2 = c2; // assignment operation

    //Cube &cu = myCube; // cu is a reference, acts as an alias for myCube
    //// any changes to cu will change myCube too

    // Creates a 1,000 value cube, pass by value
    Cube c(10);

    // Copy Constructor will create another cube (2,000 value total) 
    //Cube myCube = c; 

    // Now 2 aliases will own one 1,000 alue cube, pass by reference
    //Cube& myCube = c;

    // passing by pointer
    //Cube* myCube = &c;

    // Send the cube to someone else
    sendCube(&c); // sending memory address to pointer





	return 0;
}