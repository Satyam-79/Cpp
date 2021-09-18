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
void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *cycleNode;
    int count = 1;

    while (temp->link != NULL)
    {
        if (count == pos)
        {
            cycleNode = temp;
        }
        temp = temp->link;
        count++;
    }
    temp->link = cycleNode;
}
bool detectCycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->link != NULL)
    {
        fast = fast->link->link;
        slow = slow->link;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        slow = slow->link;
        fast = fast->link->link;
    } while (slow != fast);
    fast = head;
    while (slow->link != fast->link)
    {
        slow = slow->link;
        fast = fast->link;
    }
    slow->link = NULL;
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
    cout << detectCycle(head) << endl;

    makeCycle(head, 3);
    cout << detectCycle(head) << endl;

    removeCycle(head);
    cout << detectCycle(head) << endl;

    return 0;
}