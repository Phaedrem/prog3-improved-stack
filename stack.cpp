/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

// each cpp includes ONLY it's header directly
#include "stack.h"

Stack::Stack(int passed_size){
    if(passed_size >= MINIMUM){
        top = -1;
        size = passed_size;
        stack = new Data*[passed_size];
    } else{
        throw 0;
    }
}

Stack::~Stack(){
    if(top > -1){
        for(int i = 0; i< top+1; i++){
          delete[] stack[i];
        }
    }
    delete[] stack;
}

bool Stack::push(int, string*){
    return true;
}

bool Stack::pop(){
    return true;
}

bool Stack::peek(){
    return true;
}

bool Stack::isEmpty(){
    return top == (-1);
}