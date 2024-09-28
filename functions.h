#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Node
{
    int node_data;
    Node *next_Node_Address;

public:
    Node();
    ~Node();
    void setNext(Node *val);
    Node *getNext();
    void setData(int data);
    int getData();
};

class Stack
{
private:
    Node *top;
    int size_count;

public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};

class Queue
{
private:
    Node *top;
    Node *rear;
    int size_count;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    void clear();
    void printQueue();
};


#endif