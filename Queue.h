#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node():data(0), next(nullptr) {} //default sets data to 0, and points to nullptr
    Node(int data): data(data), next(nullptr) {} //sets int data, and points to nullptr
    Node(int data, Node *next): data(data), next(next) {} //sets data and points to next

};


class Queue
{
    private:
    Node *first;
    Node *last;

    public:
    Queue(): first(nullptr), last(nullptr){}
    ~Queue();

    void push(int data);
    bool pop();
    bool peek(int &data);
    void display(ostream &os);
};