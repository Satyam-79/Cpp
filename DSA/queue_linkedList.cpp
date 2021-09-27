#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
    node(int Val)
    {
        data = Val;
        link = NULL;
    }
};
class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }

        back->link = n;
        back = n;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        node *temp = front;
        front = front->link;
        delete temp;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        return (front == NULL);
    }
};
int main()
{
    queue q;
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
    cout << q.empty() << endl;

    return 0;
}