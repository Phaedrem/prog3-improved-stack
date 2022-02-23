/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

#include "main.h"

int main(int argc, char **argv) {
    srand(time(NULL));
    int arraySize = atoi(argv[1]);
    if(argc == 2 && arraySize >= 2){
        Data emptyData;
        string randomString;
        string consistantString = "Test String";
        rand_string(&randomString); 
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


            if(testStack.peek(&emptyData)){
                cout << "Peek Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "PEEK FAILED - Stack is Empty" << endl;
            }
            cout << endl;
            cout << endl << "Attempting to pop" << endl;
            if(testStack.pop(&emptyData)){
                cout << "Pop Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "POP FAILED - Stack is Empty" << endl;
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

            if(testStack.isEmpty()){
                cout << "Stack is Empty" << endl;
            }else{
                cout << "Stack is NOT Empty" << endl;
            }

            cout << endl << "Testing Peek on full stack" << endl << endl;

            if(testStack.peek(&emptyData)){
                cout << "Peek Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "PEEK FAILED - Stack is Empty" << endl;
            }
            cout << endl << endl;
            testStack.dumpStack();

            cout << "Testing Pop on full stack" << endl << endl;
            if(testStack.pop(&emptyData)){
                cout << "Pop Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "POP FAILED - Stack is Empty" << endl;
            }
            cout << endl;
            testStack.dumpStack();

            cout << endl << "======================================================================" << endl;
            cout << "Testing peek and pop, and emptying stack" << endl;
            cout << "======================================================================" << endl << endl;

            for(int i=0; i < arraySize*MULTIPLIER; i++){
                if(testStack.peek(&emptyData)){
                cout << "Peek Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "PEEK FAILED - Stack is Empty" << endl;
                }
                if(testStack.pop(&emptyData)){
                cout << "Pop Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
                }else{
                    cout << "POP FAILED - Stack is Empty" << endl;
                }
            }
































            /*
            cout << endl << "Attempting to push to stack" << endl << endl;
            if(testStack.push(10, &randomString)){
                cout << "PUSH Succesful" << endl;
            }else{
                cout << "PUSH FAILED" << endl << endl;
            }
            cout << endl;
            testStack.dumpStack();
            cout << endl << "Attempting to peek" << endl;
            if(testStack.peek(&emptyData)){
                cout << "Peek Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "PEEK FAILED" << endl;
            }
            cout << endl;
            testStack.dumpStack();
            cout << endl << "Attempting to pop" << endl;
            if(testStack.pop(&emptyData)){
                cout << "Pop Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "POP FAILED" << endl;
            }
            cout << endl;
            testStack.dumpStack();
            cout << endl << "Attempting to peek" << endl;
            if(testStack.peek(&emptyData)){
                cout << "Peek Succesful" << endl << emptyData.id << ": " << emptyData.information << endl;
            }else{
                cout << "PEEK FAILED" << endl;
            }
            */

            cout << endl;
            testStack.dumpStack();



        }catch(...){
            cout << "That is not a valid length, please enter a postive numeral length of 2 or more" << endl;
        }
    }else{
        cout << "Error: Pass One and only one arguement of a postive numberal of 2 or greater"  << endl;
    }
    
    return 0;
}
