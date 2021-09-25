#include <iostream>
using namespace std;
class rowNode
{
public:
    int rowNo;
    rowNode *rLink;
    rowNode *cLink;
    rowNode(int row)
    {
        rowNo = row;
        rLink = NULL;
        cLink = NULL;
    }
};
class colNode
{
public:
    int colNo;
    int data;
    colNode *cLink;
    colNode(int column)
    {
        colNo = column;
        cLink = NULL;
    }
};
void cols(colNode *&col, int colNum, int val)
{
    int num;
    cout << "\nEnter the row Number: ";
    cin >> num;
    rowNode *n = new rowNode(num);
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
void Rows(rowNode *&head, int rowNum, int colNo)
{
    int num;
    cout << "\nEnter the row Number: ";
    cin >> num;
    rowNode *n = new rowNode(num);
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
int main()
{
    int row, col, nonZero;
    cout << "\nEnter number of rows: ";
    cin >> row;
    cout << "\nEnter number of columns: ";
    cin >> col;
    cout << "\nEnter number of Non-Zero elements: ";
    cin >> nonZero;
    rowNode *head;
    Rows(head, row, col);

    return 0;
}