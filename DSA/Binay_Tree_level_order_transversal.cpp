//  level order transversal binary tree
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
void levelTransverse(node *a)
{
    if (a == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(a);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            cout << temp->data << "\t";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
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
    levelTransverse(a);

    return 0;
}