// Binary Tree print postorder preorder inOrder Post Order In Order Pre Order
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
void preorder(node *a)
{
    if (a == NULL)
    {
        return;
    }

    cout << a->data << "\t";
    preorder(a->left);
    preorder(a->right);
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
void postOrder(node *a)
{
    if (a == NULL)
    {
        return;
    }
    postOrder(a->left);
    postOrder(a->right);
    cout << a->data << "\t";
}

int main()
{
    node *a = new node(1);
    a->left = new node(2);
    a->right = new node(3);
    a->left->left = new node(4);
    a->left->right = new node(5);
    a->right->left = new node(6);
    a->right->right = new node(7);
    preorder(a);
    cout << endl;
    inOrder(a);
    cout << endl;
    postOrder(a);

    return 0;
}