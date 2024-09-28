#include "functions.h"
#include <iostream>
using namespace std;
int main()
{
    Stack myStack;

    // Initially size should be 0
    myStack.size() == 0;

    // Push elements onto the stack
    myStack.push(10);
    myStack.size() == 1;

    myStack.push(20);
    myStack.size() == 2;

    myStack.push(30);
    myStack.size() == 3;

    // Pop an element
    myStack.pop();
    myStack.size() == 2;
    cout << "before clearing out" << endl;
    myStack.printStack();
    // Clear the stack
    myStack.clear();
    myStack.size() == 0;
    cout << "after clearing out" << endl;
    myStack.printStack();
    return 0;
}