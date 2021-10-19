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
};

int main()
{
    int choice;
    int x;
    stack st;
    cout << "\n\t STACK OPERATIONS USING ARRAY";
    cout << "\n\t--------------------------------";
    cout << "\n\t 1.PUSH\n\t 2.POP\n\t 3.VIEW TOP\n\t 4.CHECK EMPTY\n\t 5.EXIT";
    do
    {
        cout << "\nEnter the Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nEnter a Value to be pushed: ";
            cin >> x;
            st.push(x);
            break;
        }
        case 2:
        {
            cout << "\nItem Popped";
            st.pop();
            break;
        }
        case 3:
        {
            cout << "\nTop value of stack is: " << st.Top();
            break;
        }
        case 4:
        {
            if (st.empty())
                cout << "\nStack is empty";
            else
                cout << "\nStack is not empty";
            break;
        }
        case 5:
        {
            cout << "\n\t EXIT POINT ";
            break;
        }
        default:
        {
            cout << "\n\t Please Enter a Valid Choice(1/2/3/4/5)";
        }
        }
    } while (choice != 5);

    return 0;
}
