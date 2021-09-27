#include <iostream>
using namespace std;
#define n 20
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