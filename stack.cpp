/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

// each cpp includes ONLY it's header directly
#include "stack.h"

Stack::Stack(int passed_size){
    top = -1; 
    size = (passed_size >= 2) ? passed_size : MINIMUM;
    stack = new Data*[size];
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
        stack[++top] = new Data;
        stack[top]->id = identifier;
        stack[top]->information = *info;
        pushed = true;
    }
    return pushed;
}

bool Stack::pop(Data* dataBox){
    bool popped = false; 
    if(top >= 0){
       dataBox->id = stack[top]->id;
       dataBox->information = stack[top]->information;
       top--;
       popped = true;
       delete stack[top+1];
    }else{
        dataBox->id = -1;
        dataBox->information = "";
    }
    return popped;
}

bool Stack::peek(Data* dataBox){
    bool peeked = false; 
    if(top >= 0){
       dataBox->id = stack[top]->id;
       dataBox->information = stack[top]->information;
       peeked = true;
    }else{
        dataBox->id = -1;
        dataBox->information = "";
    }
    return peeked;
}

bool Stack::isEmpty(){
    return top == (-1);
}