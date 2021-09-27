#include <iostream>
using namespace std;
#define n 100
class stack
{
    string *arr;
    int top;

public:
    stack()
    {
        arr = new string[n];
        top = -1;
    }
    void push(string x)
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
    string Top()
    {
        if (top == -1)
        {
            cout << "Stack Empty." << endl;
            return "-1";
        }

        return arr[top];
    }
    bool empty()
    {

        return top == -1;
    }
    int Length()
    {
        return top + 1;
    }
};
void reverseSentence(string s)
{
    stack st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.Top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Hey, How are you doing?";
    reverseSentence(s);

    return 0;
}