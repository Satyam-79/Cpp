//binary search tree BST search and delete
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
node *searchBST(node *root, int val)
{
    if (root->data == val)
    {
        return root;
    }
    if (root->data > val)
    {
        return searchBST(root->left, val);
    }
    return searchBST(root->right, val);
}
node *inOrderSucc(node *root)
{
    node *temp = root;
    while (temp && temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
void deleteBST(node *&root, int val)
{
    node *temp = root;
    if (temp->data > val)
    {
        deleteBST(temp->left, val);
    }
    else if (temp->data < val)
    {
        deleteBST(temp->right, val);
    }
    else
    {
        if (temp->left == NULL)
        {
            temp = temp->right;
            return;
        }
        if (temp->right == NULL)
        {
            temp = temp->left;
            return;
        }
    }
    node *succ = inOrderSucc(root);
    root->data = succ->data;
    deleteBST(root->right, succ->data);
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
    deleteBST(a, 5);
    inOrder(a);

    // if (searchBST(a, 5) == NULL)
    // {
    //     cout << "\nValue not found" << endl;
    // }
    // else
    //     cout << endl
    //          << searchBST(a, 5)->data << " is found";

    return 0;
}