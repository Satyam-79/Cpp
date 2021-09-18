#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *nLink;
    node *plink;
    node(int val)
    {
        data = val;
        nLink = NULL;
        plink = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->nLink = head;
    if (head != NULL)
    {
        head->plink = n;
    }
    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->nLink != NULL)
    {
        temp = temp->nLink;
    }
    temp->nLink = n;
    n->plink = temp;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->nLink;
    }
    cout << "NULL" << endl;
}
void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->nLink;
    head->plink = NULL;
    delete toDelete;
}
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;

    while (temp != NULL && count != pos)
    {
        temp = temp->nLink;
        count++;
    }
    temp->plink->nLink = temp->nLink;
    if (temp->nLink != NULL)
    {
        temp->nLink->plink = temp->plink;
    }
    delete temp;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head, 9);
    display(head);
    deletion(head, 4);
    display(head);
    deletion(head, 1);
    display(head);

    return 0;
}