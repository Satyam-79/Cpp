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
void insertAtEnd(node *&head1, int val)
{
    node *n = new node(val);
    if (head1 == NULL)
    {
        head1 = n;
        return;
    }
    node *temp = head1;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = n;
}
void display(node *head1)

{
    node *temp = head1;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}
node *sorted(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *sortedHead = new node(-1);
    node *temp3 = sortedHead;
    if (temp1->data < temp2->data)
    {
        sortedHead = temp1;
        temp1 = temp1->link;
    }
    else
    {
        sortedHead = temp2;
        temp2 = temp2->link;
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->link = temp1;
            temp1 = temp1->link;
        }
        else
        {
            temp3->link = temp2;
            temp2 = temp2->link;
        }
        temp3 = temp3->link;
    }
    while (temp1 != NULL && temp2 == NULL)
    {
        temp3->link = temp1;
        temp3 = temp3->link;
        temp1 = temp1->link;
    }
    while (temp2 != NULL && temp1 == NULL)
    {
        temp3->link = temp2;
        temp3 = temp3->link;
        temp2 = temp2->link;
    }
    return sortedHead;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    for (int i = 0; i < 20; i = i + 4)
        insertAtEnd(head1, i);
    display(head1);

    for (int i = 2; i < 20; i = i + 4)
        insertAtEnd(head2, i);
    display(head2);
    display(sorted(head1, head2));

    return 0;
}