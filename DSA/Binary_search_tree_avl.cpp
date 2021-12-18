// avl tree all operation rotation insertion deletion
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    int height;
    node *right;
    node *left;

public:
    node(int val)
    {
        data = val;
        height = 0;
        right = NULL;
        left = NULL;
    }
};
int height(node *N)
{
    if (N == NULL)
    {
        return 0;
    }
    return N->height;
}
int max(int a, int b)
{
    return (a > b)? a : b;
}

node *MakeBST(node *&root, int value)
{
    node *temp = root;

    if (root == NULL)
    {
        return (new node(value));
    }
    else if (temp->data < value)
    {
        temp->right = MakeBST(temp->right, value);
    }
    else if (temp->data > value)
    {
        temp->left = MakeBST(temp->left, value);
    }
    else
        return root;
}
node *AVL(node *&root,int key)
{
    return (MakeBST(root,key));
    
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

    inOrder(root);

    return 0;
}