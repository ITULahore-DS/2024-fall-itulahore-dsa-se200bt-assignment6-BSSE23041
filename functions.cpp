#include "functions.h"
#include <iostream>
using namespace std;

Node::Node()
{
    this->node_data = 0;
    this->next_Node_Address = nullptr;
}
Node::~Node() {}
void Node::setNext(Node *val)
{
    next_Node_Address = val;
}
Node *Node::getNext()
{
    return next_Node_Address;
}
void Node::setData(int data)
{
    node_data = data;
}
int Node::getData()
{
    return node_data;
}
Stack::Stack()
{
    top = nullptr;
    size_count = 0;
}
Stack::~Stack()
{
    while (top != nullptr)
    {
        Node *h = top;
        top = top->getNext();
        delete h;
    }
}
bool Stack::isEmpty()
{
    if (size_count == 0 || top == nullptr)
    {
        return true;
    }
    return false;
}
void Stack::push(int data)
{
    Node *newNode = new Node;
    newNode->setData(data);
    if (top == nullptr)
    {
        top = newNode;
    }
    else
    {
        newNode->setNext(top);
        top = newNode;
    }
    size_count = size_count + 1;
}
void Stack::pop()
{
    if (top == nullptr)
    {
        cerr << "stack list already empty: " << endl;
    }
    else
    {
        Node *temp = new Node;
        temp = top->getNext();
        delete top;
        top = temp;
        size_count = size_count - 1;
    }
}
int Stack::peek()
{
    if (top == nullptr)
    {
        return -1;
    }
    return top->getData();
}
int Stack::size()
{
    return size_count;
}
void Stack::clear()
{
    while (top != nullptr)
    {
        Node *h = top;
        top = top->getNext();
        delete h;
    }
    size_count = 0;
}
void Stack::printStack()
{
    if (top == nullptr)
    {
        cout << "Linked List  is empty" << endl;
    }
    else
    {
        Node *h = top;
        int index = 0;
        while (h != nullptr)
        {
            cout << "At " << index << " index: " << h->getData() << endl;
            h = h->getNext();
            index++;
        }
    }
}
Queue::Queue()
{
    rear = nullptr;
    top = nullptr;
    size_count = 0;
}
Queue::~Queue()
{
    while (top != nullptr)
    {
        Node *h = top;
        top = top->getNext();
        delete h;
    }
}
bool Queue::isEmpty()
{
    if (size_count == 0 || top == nullptr)
    {
        return true;
    }
    return false;
}
void Queue::enqueue(int data)
{
    Node *newNode = new Node;
    newNode->setData(data);
    if (top == nullptr)
    {
        top = newNode;
        rear = newNode;
    }
    else
    {
        rear->setNext(newNode);
        rear = newNode;
    }
    size_count = size_count + 1;
}
void Queue::dequeue()
{
    Node *temp = new Node;
    if (isEmpty())
    {
        cerr << "List is already empty" << endl;
    }
    else
    {

        temp = top->getNext();
        delete top;
        top = temp;
        size_count = size_count - 1;
    }
}
int Queue::size()
{
    return size_count;
}
void Queue::printQueue()
{
    if (top == nullptr)
    {
        cout << "Linked List  is empty" << endl;
    }
    else
    {
        Node *h = top;
        int index = 0;
        while (h != nullptr)
        {
            cout << "At " << index << " index: " << h->getData() << endl;
            h = h->getNext();
            index++;
        }
    }
}
void Queue::clear()
{
    while (top != nullptr)
    {
        Node *h = top;
        top = top->getNext();
        delete h;
    }
    size_count = 0;
}