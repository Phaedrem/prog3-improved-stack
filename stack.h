/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

#ifndef STACK_H
#define STACK_H

#define MINIMUM 2
/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

#include <iostream>
#include "data.h"

class Stack {

public:
    Stack(int);
    ~Stack();
    bool push(int, string*);
    bool pop(Data*);
    bool peek(Data*);
    bool isEmpty();
    
private:

    /* 
     * write all your private method prototypes here
     */

    // these are the only attributes you need.
    // do not modify them or add any other attributes
    int top;
    int size;
    Data **stack;
};

#endif //STACK_H
