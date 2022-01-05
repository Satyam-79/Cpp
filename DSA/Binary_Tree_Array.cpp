
#include <iostream>
using namespace std;

#define totalNode 10
char tree[totalNode];

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

int get_right_child(int index)
{
    if (tree[index] != '\0' && ((2 * index) + 2) <= totalNode)
        return ((2 * index) + 2);
    return -1;
}

int get_left_child(int index)
{
    if (tree[index] != '\0' && ((2 * index) + 1) <= totalNode)
        return ((2 * index) + 1);
    return -1;
}

void preorder(int index)
{
    if (index >= 0 && tree[index] != '\0')
    {
        cout << tree[index] << " ";
        preorder(get_left_child(index));
        preorder(get_right_child(index));
    }
}

void inOrder(int index)
{
    if (index >= 0 && tree[index] != '\0')
    {
        inOrder(get_left_child(index));
        cout << tree[index] << " ";
        inOrder(get_right_child(index));
    }
}

int print_tree()
{
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (tree[i] != '\0')
            cout << tree[i] << " ";
        else
            cout << "- ";
    }
    return 0;
}

int main()
{
    /*
          A(0)
         /   \
        B(1)  C(2)
      /   \      \
     D(3)  E(4)   F(6)
     */

    root('A');
    set_right('C', 0);
    set_left('B', 0);
    set_left('D', 1);
    set_right('E', 1);
    set_right('F', 2);

    cout << "\nNodes of Tree are: ";
    print_tree();
    cout << "\nPreorder Transversal of Tree is : " << endl;
    preorder(0);
    cout << "\nInOrder Transversal of Tree is : " << endl;
    inOrder(0);
    return 0;
}
