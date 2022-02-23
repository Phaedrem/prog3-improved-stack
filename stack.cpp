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
        stack = new Data*[this->size];
    } else{
        throw 0;
    }
}

Stack::~Stack(){
    for(int i = top; i>=0; i--){
        delete stack[i];
    }
    delete[] stack;
}

bool Stack::push(int identifier, string* info){
    bool pushed = false;
    if((top < size-1) && (identifier > 0) && (info->length() > 0)){
        top++;
        stack[top] = new Data;
        stack[top]->id = identifier;
        stack[top]->information = *info;
        pushed = true;
    }
    return pushed;
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

void Stack::dumpStack() {
    std::cout << "dumping whole stack..." << std::endl;
    if (!isEmpty()) {
        for (int i = top; i >= 0; i--) {
            std::cout << stack[i]->id << " " <<stack[i]->information << std::endl;
        }
    } else {
        std::cout << "\tstack is empty" << std::endl;
    }
    std::cout << std::endl;
}