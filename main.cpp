#include <iostream>
#include "functions.h"
using namespace std;

void displayInitialMenu()
{
    cout << "Select Data Structure" << endl;
    cout << "1. Stack"<< endl;
    cout << "2. Queue"<< endl;
    cout << "3. Exit" << endl;
    cout << "Choose an option: ";
}

void stackMenu(Stack &myStack)
{
    int choice, value;
    while (true)
    {
        cout << "Stack Operations" << endl;
        cout << "1. Push"<< endl;
        cout << "2. Pop"<< endl;
        cout << "3. Peek"<< endl;
        cout << "4. Check if Empty"<< endl;
        cout << "5. Clear Stack"<< endl;
        cout << "6. Back to Data Structure Selection" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            myStack.push(value);
            cout << "Pushed " << value << " onto the stack." << endl;
            break;
        case 2:
            myStack.pop();
            cout << "Popped from the stack." << endl;
            break;
        case 3:
            cout << "Top value: " << myStack.peek() << "" << endl;
            break;
        case 4:
            if (myStack.isEmpty())
                cout << "The stack is empty." << endl;
            else
                cout << "The stack is not empty." << endl;
            break;
        case 5:
            myStack.clear();
            cout << "Stack cleared." << endl;
            break;
        case 6:
            return;
        default:
            cout << "Invalid option, try again." << endl;
        }
    }
}

void queueMenu(Queue &myQueue)
{
    int choice, value;
    while (true)
    {
        cout << "--- Queue Operations ---" << endl;
        cout << "1. Enqueue"<< endl;
        cout << "2. Dequeue"<< endl;
        cout << "3. Check if Empty"<< endl;
        cout << "4. Clear Queue"<< endl;
        cout << "5. Back to Data Structure Selection" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            myQueue.enqueue(value);
            cout << "Enqueued " << value << " into the queue." << endl;
            break;
        case 2:
            myQueue.dequeue();
            cout << "Dequeued from the queue." << endl;
            break;
        case 3:
            if (myQueue.isEmpty())
                cout << "The queue is empty." << endl;
            else
                cout << "The queue is not empty." << endl;
            break;
        case 4:
            myQueue.clear();
            cout << "Queue cleared." << endl;
            break;
        case 5:
            return;
        default:
            cout << "Invalid option, try again." << endl;
        }
    }
}

int main()
{
    Stack myStack;
    Queue myQueue;
    int choice;

    while (true)
    {
        displayInitialMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            stackMenu(myStack);
            break;
        case 2:
            queueMenu(myQueue);
            break;
        case 3:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid option, try again." << endl;
        }
    }

    return 0;
}
