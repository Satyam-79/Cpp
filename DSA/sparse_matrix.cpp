#include <iostream>
using namespace std;
class Node
{
public:
    int position;
    Node *link;
    Node(int pos)
    {
        position = pos;
        link = NULL;
    }
};
class rowNode : Node
{
public:
    rowNode *rLink;

    rowNode(int pos)
        : Node(pos)
    {
        rLink = NULL;
    }
};
class colNode : Node
{
public:
    int data;

    colNode(int pos, int val)
        : Node(pos)
    {
        data = val;
    }
};
void cols(colNode *&head2, int colNum, int val)
{
    colNode *n = new colNode(colNum, val);
    if (head2 == NULL)
    {
        head2 = n;
        return;
    }
    colNode *temp = head2;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = n;
}
void Rows(rowNode *&head, int rowNum)
{
    rowNode *n = new rowNode(rowNum);
    if (head == NULL)
    {
        head = n;
        return;
    }
    rowNode *temp = head;

    while (temp->rLink != NULL)
    {
        temp = temp->rLink;
    }
    temp->rLink = n;
}
void link(rowNode *&head, colNode *&head2)
{
    if (head->rLink == NULL)
    {
        head->link = head2;
    }
    rowNode *temp = head;
    while (temp->rLink != NULL)
    {
        temp = temp->rLink;
    }
    temp->rLink = head2;
}
int main()
{
    int row, col, nonZero, count = 0;
    cout << "\nEnter number of rows: ";
    cin >> row;
    cout << "\nEnter number of columns: ";
    cin >> col;
    cout << "\nEnter number of Non-Zero elements: ";
    cin >> nonZero;
    rowNode *head = NULL;
    int num;
    int cNum;
    int val;

    while (count <= nonZero)
    {
        cout << "\nEnter row number: ";
        cin >> num;
        Rows(head, num);
        colNode *head2 = NULL;
        while (count <= nonZero)
        {
            cout << "\nEnter column number: ";

            cin >> cNum;
            cout << "\nEnter value: ";

            cin >> val;
            cols(head2, cNum, val);
            count++;
        }
        link(head, head2);

        cin >> num;
    }

    return 0;
}