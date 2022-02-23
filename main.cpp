/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

#include "main.h"

int main(int argc, char **argv) {
    srand(time(NULL));
    if(argc == 2){
        Data emptyData;
        string testString;
        rand_string(&testString); 
        int arraySize = atoi(argv[1]);
        if(arraySize >= 2){
            cout << endl << "arraySize is " << arraySize << endl << "Attempting to create stack" << endl << endl;
            try{
                Stack testStack(arraySize);
                if(testStack.isEmpty()){
                    cout << "There is now an empty stack" << endl;
                }else{
                    cout << "Something went wrong" << endl;
                }
                cout << endl << "Attempting to push to stack" << endl << endl;
                if(testStack.push(10, &testString)){
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
                cout << endl;
                testStack.dumpStack();
    

            } catch(...){
                cout << "That is not a valid length, please enter a postive numeral length of 2 or more" << endl;
            }
        } else{
            cout << "That is not a valid length, please enter a postive numeral length of 2 or more" << endl;
        }

    }else{
        cout << "Error: One and only one arguement must be passed"  << endl;
    }
    
    return 0;
}
