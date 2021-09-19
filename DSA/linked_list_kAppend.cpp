#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;

    node(int val)
    {
        data = val;
        link = NULL;
    }
};
void insertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = n;
}
void display(node *head)

{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->link;
    }
    return l;
}
node *kAppend(node *&head, int k)
{

    int l = length(head);
    k = k % l;
    node *tail = head;
    node *newTail;
    node *newHead;
    int count = 1;
    while (tail->link != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
            newHead = tail->link;
        }
        tail = tail->link;
        count++;
    }
    tail->link = head;
    newTail->link = NULL;
    return newHead;
}
int main()
{
    node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    display(head);
    node *newhead = kAppend(head, 3);
    display(newhead);

    return 0;
}