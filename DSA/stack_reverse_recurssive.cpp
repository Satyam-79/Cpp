#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow." << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow." << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack Empty." << endl;
            return -1;
        }

        return arr[top];
    }
    bool empty()
    {

        return top == -1;
    }
    int length()
    {
        return top + 1;
    }
};
void insertAtBottom(stack &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int topElement = st.Top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topElement);
}
void reverseRecursive(stack &st)
{
    if (st.empty())
    {
        return;
    }

    int element = st.Top();
    st.pop();
    reverseRecursive(st);
    insertAtBottom(st, element);
}
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    reverseRecursive(st);
    while (!st.empty())
    {
        cout << st.Top() << "\t";
        st.pop();
    }

    return 0;
}