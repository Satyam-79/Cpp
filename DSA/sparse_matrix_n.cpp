#include <iostream>
using namespace std;
#define x 4
#define y 5
class colNode
{
public:
    int data;
    int colNo;
    colNode *Link;

    colNode(int pos, int val)
    {
        data = val;
        colNo = pos;
        Link = NULL;
    }
};
class rowNode
{
public:
    rowNode *rLink;
    colNode *cLink;
    int rowNo;

    rowNode(int pos)
    {
        rLink = NULL;
        cLink = NULL;
        rowNo = pos;
    }
};

void cols(colNode *&head2, int val, int colNum)
{
    colNode *n = new colNode(colNum, val + 1);
    if (head2 == NULL)
    {
        head2 = n;
        return;
    }
    colNode *temp = head2;

    while (temp->Link != NULL)
    {
        temp = temp->Link;
    }
    temp->Link = n;
}
rowNode *Rows(rowNode *&head, int rowNum)
{
    rowNode *n = new rowNode(rowNum + 1);
    if (head == NULL)
    {
        head = n;
        return head;
    }

    rowNode *temp = head;

    while (temp->rLink != NULL)
    {
        temp = temp->rLink;
    }
    temp->rLink = n;
    return n;
}
void makeSparse(int matrix[x][y], rowNode *&head)
{
    rowNode *head1 = NULL;

    for (int i = 0; i < x; i++)
    {
        head1 = Rows(head, i);
        colNode *cHead = NULL;

        for (int j = 0; j < y; j++)
        {
            if (matrix[i][j] != 0)
            {
                cols(cHead, matrix[i][j], j);
            }
        }
        head1->cLink = cHead;
    }
}
void print(rowNode *head)
{
    rowNode *temp1 = head;
    while (temp1 != NULL)
    {
        colNode *temp = head->cLink;
        cout << "Row No : " << temp1->rowNo << endl;
        while (temp != NULL)
        {
            cout << "Column No : " << temp->colNo << "\t\t"
                 << "value : " << temp->data << endl;
            temp = temp->Link;
        }
        cout << endl;
        temp1 = temp1->rLink;
    }
}
int main()
{
    int Sparse_Matrix[x][y] =
        {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}};
    rowNode *head = NULL;
    makeSparse(Sparse_Matrix, head);
    print(head);

    return 0;
}