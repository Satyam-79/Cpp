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
void FCFS(queue q, int p)
{
    int turnAround = 0;
    cout << "Processes  "
         << " Burst time  "
         << " Waiting time  "
         << " Turn around time\n";
    for (int i = 1; i <= p; i++)
    {
        turnAround += q.peek();
        cout << i << "\t\t" << q.peek() << "\t\t" << turnAround - q.peek() << "\t\t" << turnAround << endl;
        q.dequeue();
    }
}
int main()
{
    int ProcessCount = 3;
    queue q;
    q.enqueue(24);
    q.enqueue(3);
    q.enqueue(3);
    FCFS(q, ProcessCount);
    return 0;
}