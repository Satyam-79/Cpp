//  Binary Search tree build
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

public:
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void buildBST(node *&root, int val)
{
    node *n = new node(val);
    node *temp = root;
    if (val < temp->data && temp->left == NULL)
    {
        temp->left = n;
        return;
    }
    if (val > temp->data && temp->right == NULL)
    {
        temp->right = n;
        return;
    }

    if (val < temp->data)
    {
        buildBST(temp->left, val);
    }
    else if (val > temp->data)
    {
        buildBST(temp->right, val);
    }
}
void inOrder(node *&a)
{
    if (a == NULL)
    {
        return;
    }
    inOrder(a->left);
    cout << a->data << "\t";
    inOrder(a->right);
}

int main()
{
    node *a = new node(1);
    buildBST(a, 1);
    buildBST(a, 3);
    buildBST(a, 4);
    buildBST(a, 2);
    buildBST(a, 7);
    buildBST(a, 2);
    buildBST(a, 9);
    buildBST(a, 5);
    inOrder(a);

    return 0;
}