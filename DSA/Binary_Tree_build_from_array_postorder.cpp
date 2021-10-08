// Binary tree build from, array postorder postorder inorder.
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
node *buildTree(int postorder[], int inOrder[], int start, int end)
{
    static int index = 4;
    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[index];
    index--;
    node *root = new node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = search(inOrder, start, end, curr);
    root->right = buildTree(postorder, inOrder, pos + 1, end);
    root->left = buildTree(postorder, inOrder, start, pos - 1);

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
    int postorder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};
    node *a = buildTree(postorder, inOrder, 0, 4);
    InOrder(a);

    return 0;
};
