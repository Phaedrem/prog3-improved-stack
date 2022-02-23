/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

#include "main.h"

int main(int argc, char **argv) {
    srand(time(NULL));
    if(argc == 2){
        int arraySize = atoi(argv[1]);
        if(arraySize >= 2){
            Data emptyData;
            string randomString;
            rand_string(&randomString); 
            string consistantString = "Test String";

            cout << endl << "======================================================================" << endl;
            cout << "Beginning Testing" << endl;
            cout << "======================================================================" << endl << endl;

            cout << endl << "arraySize is " << arraySize << endl << "Attempting to create stack" << endl << endl;
            try{
                Stack testStack(arraySize);
                if(testStack.isEmpty()){
                    cout << "There is now an empty stack" << endl;
                }else{
                    cout << "Something went wrong" << endl;
                }
                cout << endl;
                testStack.dumpStack();

                cout << endl << "======================================================================" << endl;
                cout << "Testing against empty stack" << endl;
                cout << "======================================================================" << endl << endl;

                cout << endl << "Attempting to peek" << endl;
                if(testStack.peek(&emptyData)){
                    cout << "Peeked: " << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "peek underflow error: stack is empty" << endl;
                }
                cout << endl;
                cout << endl << "Attempting to pop" << endl;
                if(testStack.pop(&emptyData)){
                    cout << "Popped: " << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "pop underflow error: stack is empty" << endl;
                }

                cout << endl << "======================================================================" << endl;
                cout << "Overfilling Stack using consective ID's and repeating strings" << endl;
                cout << "======================================================================" << endl << endl;
                

                for(int i = 0; i<arraySize*MULTIPLIER; i++){
                    if(testStack.push(i, &consistantString)){
                    cout << "Push Succesful" << endl;
                    }else{
                        cout << "Push FAILED - Stack is full or improper id/string was sent" << endl;
                    }
                }
                cout << endl; 
                if(testStack.isEmpty()){
                    cout << "Stack is Empty" << endl;
                }else{
                    cout << "Stack is NOT Empty" << endl;
                }

                cout << endl << "Testing Peek on full stack" << endl << endl;

                if(testStack.peek(&emptyData)){
                    cout << "Peeked: " << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "peek underflow error: stack is empty" << endl;
                }
                cout << endl << endl;
                testStack.dumpStack();

                cout << "Testing Pop on full stack" << endl << endl;
                if(testStack.pop(&emptyData)){
                    cout << "Popped: " << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "pop underflow error: stack is empty" << endl;
                }
                cout << endl;
                testStack.dumpStack();

                cout << endl << "======================================================================" << endl;
                cout << "Testing peek and pop, and emptying stack" << endl;
                cout << "======================================================================" << endl << endl;

                for(int i=0; i < arraySize*MULTIPLIER; i++){
                    if(testStack.peek(&emptyData)){
                        cout << "Peeked: " << emptyData.id << ": " << emptyData.information << endl;
                    }else{
                        cout << "peek underflow error: stack is empty" << endl;
                    }
                    if(testStack.pop(&emptyData)){
                        cout << "Popped: " << emptyData.id << ": " << emptyData.information << endl;
                    }else{
                        cout << "pop underflow error: stack is empty" << endl;
                    }
                }
                cout << endl; 
                if(testStack.isEmpty()){
                    cout << "Stack is Empty" << endl;
                }else{
                    cout << "Stack is NOT Empty" << endl;
                }

                cout << endl;
                testStack.dumpStack();

                cout << endl << "Attempting to peek" << endl;
                if(testStack.peek(&emptyData)){
                    cout << "Peeked: " << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "peek underflow error: stack is empty" << endl;
                }
                cout << endl;
                cout << endl << "Attempting to pop" << endl;
                if(testStack.pop(&emptyData)){
                    cout << "Popped: " << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "pop underflow error: stack is empty" << endl;
                }

                cout << endl << "======================================================================" << endl;
                cout << "Filling stack halfway and testing the middle of the stack" << endl;
                cout << "======================================================================" << endl << endl;

                for(int i = 0; i<(arraySize / 2); i++){
                    if(testStack.push(i+1, &consistantString)){
                        cout << "Push Succesful" << endl;
                    }else{
                        cout << "Push FAILED - Stack is full or improper id/string was sent" << endl;
                    }
                }
                cout << endl;
                for (int i = 0; i<arraySize*NARROW; i++) {
                    if (testStack.isEmpty()) {
                        cout << "stack is empty" << endl;
                    } else {
                        cout << "stack is NOT empty" << endl;
                    }
                    cout << endl;

                    cout << endl << "Attempting to peek" << endl;
                    if(testStack.peek(&emptyData)){
                        cout << "Peeked: " << emptyData.id << ": " << emptyData.information << endl;
                    }else{
                        cout << "peek underflow error: stack is empty" << endl;
                    }
                    cout << endl;
                    cout << endl << "Attempting to pop" << endl;
                    if(testStack.pop(&emptyData)){
                        cout << "Popped: " << emptyData.id << ": " << emptyData.information << endl;
                    }else{
                        cout << "pop underflow error: stack is empty" << endl;
                    }
                    cout << endl << endl;
                    if(testStack.push(i+1, &consistantString)){
                        cout << "Push Succesful" << endl;
                    }else{
                        cout << "Push FAILED - Stack is full or improper id/string was sent" << endl;
                    }
                    cout << endl;
                }
                cout << endl;

                cout << endl << "======================================================================" << endl;
                cout << "Random Test" << endl;
                cout << "======================================================================" << endl << endl;

                cout << "Emptying Stack" << endl << endl;
                while(!testStack.isEmpty()){
                    testStack.pop(&emptyData);
                }

                if(testStack.isEmpty()) {
                    cout << "stack is empty" << endl;
                }else {
                    cout << "stack is NOT empty" << endl;
                }
                
                int choice = rand() % CHOICES + 1;
                for(int i = 0; i < arraySize*RANDOM_MULTIPLIER; i++){
                    switch (choice){
                        case 1:
                        case 2:
                            rand_string(&randomString); 
                            if(testStack.push(rand_int(), &randomString)){
                                cout << "Push Succesful" << endl;
                            }else{
                                cout << "Push FAILED - Stack is full or improper id/string was sent" << endl;
                            }
                            break;
                        case 3:
                        case 4:
                            if(testStack.pop(&emptyData)){
                                cout << "Popped: " << emptyData.id << ": " << emptyData.information << endl;
                            }else{
                                cout << "pop underflow error: stack is empty" << endl;
                            }
                            break;
                        case 5:
                            if(testStack.peek(&emptyData)){
                                cout << "Peeked: " << emptyData.id << ": " << emptyData.information << endl;
                            }else{
                                cout << "peek underflow error: stack is empty" << endl;
                            }
                            break;
                        case 6:
                            if(testStack.isEmpty()) {
                                cout << "stack is empty" << endl;
                            }else {
                                cout << "stack is NOT empty" << endl;
                            }
                            break;
                    }
                    choice = rand() % CHOICES +1;
                }

                cout << endl;
                testStack.dumpStack();
            }catch(...){
                cout << "That is not a valid length, please enter a postive numeral length of 2 or more" << endl;
            }
        }else{
            cout << "Error: Pass One and only one arguement of a postive numberal of 2 or greater"  << endl;
        }
    }else{
        cout << "Error: Pass One and only one arguement of a postive numberal of 2 or greater"  << endl;
    }
    
    return 0;
}
