#include <iostream>
using namespace std;
#define n 30
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front > back || front == -1)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front > back || front == -1)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        return (front > back || front == -1);
    }
};
class stack
{
    queue q1, q2;
    int topcount;

public:
    stack()
    {
        topcount = -1;
    }
    void push(int x)
    {
        topcount++;
        if (q1.empty())
        {
            q1.enqueue(x);
            return;
        }
        q2.enqueue(x);
        while (!q1.empty())
        {
            q2.enqueue(q1.peek());
            q1.dequeue();
        }
        queue q = q1;
        q1 = q2;
        q2 = q;
    }
    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        topcount--;

        q1.dequeue();
    }
    int Top()
    {
        if (topcount == -1)
        {
            cout << "Stack empty" << endl;
            return -1;
        }
        return q1.peek();
    }
    int length()
    {
        return topcount + 1;
    }
    bool Empty()
    {
        return topcount == -1;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.length() << endl;
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Empty() << endl;
    st.pop();
    cout << st.Empty() << endl;

    return 0;
}