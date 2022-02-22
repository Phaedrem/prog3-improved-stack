/*********************
Name: Darren Bowers
Coding 04
Purpose: Stacks - First improvement assignment
**********************/

#include "main.h"

int main(int argc, char **argv) {
    // here for the rand_string() function
    // if you don't use it, get rid of this
    srand(time(NULL));

    if(argc == 2){
        int arraySize = atoi(argv[1]);
        if(arraySize >= 2){
            cout << "arraySize is  " << arraySize << endl;
            try{
                Stack testStack(arraySize);
            } catch(...){
                cout << "error" << endl;
            }
        } else{
            cout << "That is not a valid length, please enter a length of 2 or more" << endl;
        }

    }else{
        cout << "Error: One and only one arguement must be passed"  << endl;
    }

    
    /* ***************************************************************
     * Use the number passed in from the command line and declare a stack
     * that uses that number as the size of the stack. NOTE: Make sure
     * your stack ALSO checks the number passed in to it. You cannot rely
     * on main checking the number first. This will be tested during grading.
     * ***************************************************************/

    
    /* ***************************************************************
     * Throughly test your stack. You must perform an exhaustive series
     * of tests on your stack. Show all possible ways your stack can be used
     * and abused and prove that your stack can gracefully handle ALL cases.
     * You must use automated testing (no user input). First cover all
     * explicit cases which you can think of, then execute random operations.
     * When generating test data, use random ints for ids and random short
     * strings for string. There is a string generator made for you in the
     * functions module. You are free to use it or make your own.
     * ***************************************************************/


    /* ***************************************************************
     * Your code will be tested by applying your stack to a custom main
     * designed to break your code. If it can be broken, you risk a
     * substantially reduced grade, up to and including a zero.
     * ***************************************************************/
    
    // WHEN YOU SUBMIT, DELETE ALL INSTRUCTIONAL COMMENTS
    
    return 0;
}
