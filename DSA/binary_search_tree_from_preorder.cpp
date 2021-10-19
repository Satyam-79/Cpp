// Binary tree build from
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

node *buildTree(int preorder[], int start, int end)
{
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
    node *a = buildTree(preorder, 0, 4);
    InOrder(a);

    return 0;
};
