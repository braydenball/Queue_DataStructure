#include "Queue.cpp"

int main()
{
    Queue S;
    int tmp;
    S.push(5);
    S.peek(tmp);
    cout << tmp << endl;
    S.push(33);
    S.push(1);
    S.push(7);
    S.peek(tmp);
    cout << tmp << endl;
    S.push(33);
    S.push(12);
    S.display(cout);
    S.pop();
    S.display(cout);
    S.push(14);
    S.display(cout);
    S.pop();
    S.pop();
    S.display(cout);
    S.pop();
    S.pop();
    S.display(cout);
    S.peek(tmp);
    cout << tmp << endl;

}