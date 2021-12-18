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
int length(node *head1)
{
    int l = 0;
    node *temp = head1;
    while (temp != NULL)
    {
        l++;
        temp = temp->link;
    }
    return l;
}
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
void findInsert(node *&head, int val, int pos)
{
    if (pos > length(head))
    {
        cout << "position exceeded list length" << endl;
        return;
    }
    if (head == NULL)
    {
        return;
    }
    node *n = new node(val);
    node *temp = head->link;
    node *temp2 = head;
    int count = 0;
    while (count != pos - 1)
    {
        count++;
        temp = temp->link;
        temp2 = temp2->link;
    }
    temp2->link = n;
    n->link = temp;
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
void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->link;
    delete toDelete;
}
void deletion(node *&head, int var)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->link == NULL)
    {
        deleteAtHead(head);
        return;
    }

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
    insertAtHead(head, 0);
    insertAtEnd(head, 5);
    insertAtEnd(head, 7);

    display(head);

    if (search(head, 3))
        cout << "\nvalue exists" << endl;
    else
        cout << "\nvalue doesn't exists" << endl;
    cout << endl;

    deletion(head, 3);
    display(head);
    cout << endl;

    findInsert(head, 4, 2);
    display(head);
    cout << endl;

    deleteAtHead(head);
    display(head);

    return 0;
}