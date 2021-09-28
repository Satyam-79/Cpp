#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow." << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow." << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack Empty." << endl;
            return -1;
        }

        return arr[top];
    }
    bool empty()
    {

        return top == -1;
    }
    int length()
    {
        return top + 1;
    }
};
class Queue
{
    stack st1;
    stack st2;

public:
    void enqueue(int x)
    {
        if (st1.length() == n)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        while (!st1.empty())
        {
            st2.push(st1.Top());
            st1.pop();
        }
        st1.push(x);

        while (!st2.empty())
        {
            st1.push(st2.Top());
            st2.pop();
        }
    }
    void dequeue()
    {
        if (st1.empty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        st1.pop();
    }
    int peek()
    {
        if (st1.empty())
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return st1.Top();
    }
    bool Empty()
    {
        return st1.empty();
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << q.peek() << "\t" << endl
         << endl;
    q.dequeue();
    cout << q.peek() << "\t" << endl;
    q.dequeue();
    cout << q.peek() << "\t" << endl;
    q.dequeue();
    cout << q.peek() << "\t" << endl;
    q.dequeue();
    cout << q.Empty() << endl;
    return 0;
}