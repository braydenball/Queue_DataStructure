#include "Queue.h"

void Queue::push(int data)
{
    Node *tmp = new Node(data);

    if (first == nullptr)
    {
        first = tmp;
    }
    else 
    {
        last->next = tmp;
    }
    last = tmp;
}
bool Queue::pop()
{
    Node *tmp = first;

    if (first == nullptr)
    {
        return false;
    }
    first = first->next;

    if (first == nullptr)
    {
        last = nullptr;
    }
    delete tmp;
    return true;
}
bool Queue::peek(int &data)
{
    if (first == nullptr)
    {
        return false;
    }
    data = first->data;
    return true;
}
void Queue::display(ostream &os)
{
    Node *tmp = first; //set the current temporary node to the top
    while(tmp != nullptr) // loop while temporary is still in the list
    {
        os << tmp->data << " "; //output the data stored in the current node
        
        if (tmp->data == 5) 
        {
            cout << endl;
        }
        tmp = tmp->next; //move the temporary node to the next node
        
    }
}
ostream &operator<<(ostream &os, Queue &right)
    {
        right.display(cout); //calls the display method for the Stack
        return os; //returns the updated ostream
    }

Queue::~Queue()
{
    Node *tmp = first;
    while (tmp != nullptr)
    {
        first = first->next;
        delete tmp;
        tmp = first;
    }
    last = nullptr;
}