#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int NUM_NAMES = 5;

int main(int argc, char **argv)
{
    vector<string> names;
    names.resize(NUM_NAMES);

    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << "enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << names[i] << "\n";
    }
}