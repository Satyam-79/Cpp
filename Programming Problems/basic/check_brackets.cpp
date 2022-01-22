/*Your friend is making a text editor for programmers. He is currently working on a feature that will
find errors in the usage of different types of brackets. Code can contain any brackets from the set
[]{}(), where the opening brackets are [,{, and ( and the closing brackets corresponding to them
are ],}, and ).*/


#include <iostream>
#include <stack>
#include <string>

using std::cout;

struct Bracket
{
    Bracket(char type, long long position) : type(type),
                                             position(position)
    {
    }

    bool Matchc(char c)
    {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    long long position;
};

int main()
{
    std::string text;
    getline(std::cin, text);

    std::stack<Bracket> opening_brackets_stack;
    for (long long position = 0; position < text.length(); ++position)
    {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{')
        {
            opening_brackets_stack.push(Bracket(next, position));
        }

        if (next == ')' || next == ']' || next == '}')
        {
            if (opening_brackets_stack.empty())
            {
                cout << position + 1;
                exit(1);
            }

            auto tp = opening_brackets_stack.top();

            if (tp.Matchc(next))
            {
                opening_brackets_stack.pop();
            }
            else
            {
                cout << position + 1;
                exit(1);
            }
        }
    }
    if (opening_brackets_stack.empty())
    {
        cout << "Success";
    }
    else
        cout << opening_brackets_stack.top().position + 1;

    return 0;
}
