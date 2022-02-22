/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

// each cpp includes ONLY it's header directly
#include "stack.h"

Stack::Stack(int passed_size){
    if(passed_size >= 2){
        top = -1;
        size = passed_size;
        stack = new Data*[size];
    } else{
        throw 0;
    }
}

Stack::~Stack(){
    for(int i = 0; i< size; i++){
        delete[] stack[i];
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