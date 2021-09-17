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
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->link = head;
    head = n;
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
bool search(node *head, int search)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == search)
            return true;

        temp = temp->link;
    }
    return false;
}
void deletion(node *head, int var)
{
    node *temp = head;
    while (temp->link->data != var)
    {
        temp = temp->link;
    }
    node *toDelete = temp->link;
    temp->link = temp->link->link;
    delete toDelete;
}
int main()
{
    node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    display(head);
    cout << endl;
    insertAtHead(head, 4);
    display(head);
    if (search(head, 3))
        cout << "\nvalue exists" << endl;
    else
        cout << "\nvalue doesn't exists" << endl;

    deletion(head, 2);
    display(head);
    return 0;
}