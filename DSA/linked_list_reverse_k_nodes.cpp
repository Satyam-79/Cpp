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
node *reverseKNodes(node *&head, int k)
{
    node *previous = NULL;
    node *current = head;
    node *next;
    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->link;
        current->link = previous;
        previous = current;
        current = next;
        count++;
    }
    if (next != NULL)
        head->link = reverseKNodes(next, k);

    return (previous);
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
    display(head);
    node *newhead = reverseKNodes(head, 2);
    display(newhead);

    return 0;
}