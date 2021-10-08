// Binary tree build from, array postorder preorder inorder.
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
int search(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildTree(int preorder[], int inOrder[], int start, int end)
{
    static int index = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[index];
    index++;
    node *root = new node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = search(inOrder, start, end, curr);
    root->left = buildTree(preorder, inOrder, start, pos - 1);
    root->right = buildTree(preorder, inOrder, pos + 1, end);
    return root;
}
void InOrder(node *a)
{
    if (a == NULL)
    {
        return;
    }
    InOrder(a->left);
    cout << a->data << "\t";
    InOrder(a->right);
}
int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};
    node *a = buildTree(preorder, inOrder, 0, 4);
    InOrder(a);

    return 0;
};
