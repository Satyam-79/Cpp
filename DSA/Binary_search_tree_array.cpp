// binary search tree bst using array
//  C++ implementation of tree using array
//  numbering starting from 0 to n-1.
#include <iostream>
using namespace std;
char tree[20];
int root(char key)
{
    if (tree[0] != '\0')
        cout << "Tree already had root";
    else
        tree[0] = key;
    return 0;
}

int set_left(char key, int parent)
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at"
             << (parent * 2) + 1
             << " , no parent found";
    else
        tree[(parent * 2) + 1] = key;
    return 0;
}

int set_right(char key, int parent)
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at"
             << (parent * 2) + 2
             << " , no parent found";
    else
        tree[(parent * 2) + 2] = key;
    return 0;
}

int print_tree()
{
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (tree[i] != '\0')
            cout << tree[i];
        else
            cout << "-";
    }
    return 0;
}
void buildBST(char arr[], int val)
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
// Driver Code
int main()
{
    root('A');
    
    print_tree();
    return 0;
}
