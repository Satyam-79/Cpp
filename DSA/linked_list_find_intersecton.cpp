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
void makeIntersection(node *&head1, node *&head2, int pos)
{
    if (head1 == NULL)
    {
        return;
    }

    node *temp = head1;
    node *temp2 = head2;
    int count = 0;
    while (count != pos)
    {
        count++;
        temp = temp->link;
    }
    if (head2 == NULL)
    {
        head2 = temp;
        return;
    }

    while (temp2->link != NULL)
    {
        temp2 = temp2->link;
    }
    temp2->link = temp;
}
int findIntresection(node *head1, node *head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *pnt1;
    node *pnt2;

    if (l1 > l2)
    {
        d = l1 - l2;
        pnt1 = head1;
        pnt2 = head2;
    }
    else
    {
        d = l2 - l1;
        pnt1 = head2;
        pnt2 = head1;
    }
    while (d != 0)
    {
        if (pnt1 == NULL)
        {
            return -1;
        }
        d--;

        pnt1 = pnt1->link;
    }
    while (pnt2 != NULL && pnt1 != NULL)
    {
        if (pnt1 == pnt2)
        {
            return pnt1->data;
        }
        pnt1 = pnt1->link;
        pnt2 = pnt2->link;
    }
    return -1;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    for (int i = 0; i < 9; i++)
        insertAtEnd(head1, i);
    display(head1);

    for (int i = 14; i < 16; i++)
        insertAtEnd(head2, i);
    display(head2);

    makeIntersection(head1, head2, 6);
    display(head2);
    cout << "Intersection at : " << findIntresection(head1, head2);

    return 0;
}