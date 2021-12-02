#include <iostream>
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
void MakeBST(node *&root, int value)
{
    node *temp = root;
    node *a = new node(value);

    if (root == NULL)
    {
        root = a;
        return;
    }
    if (temp->data == value)
    {
        return;
    }
    if (temp->data > value && temp->left == NULL)
    {
        temp->left = a;
        return;
    }
    if (temp->data < value && temp->right == NULL)
    {
        temp->right = a;
        return;
    }

    if (temp->data < value)
    {
        MakeBST(temp->right, value);
    }
    else if (temp->data > value)
    {
        MakeBST(temp->left, value);
    }
}
node *AVL(node *&root)
{
}
void inOrder(node *a)
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
    node *root = NULL;
    MakeBST(root, 1);
    MakeBST(root, 3);
    MakeBST(root, 4);
    MakeBST(root, 2);
    MakeBST(root, 7);
    MakeBST(root, 2);
    MakeBST(root, 9);
    MakeBST(root, 5);
    inOrder(root);

    return 0;
}