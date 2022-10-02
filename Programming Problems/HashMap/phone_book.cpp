#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using std::cin;
using std::cout;
using std::string;
using std::unordered_map;
using std::vector;

class PhoneBook
{
private:
    unordered_map<long long, string> directory;
    string query, name;
    int number;

    void read_queries()
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            cin >> query;
            if (query == "add")
            {
                cin >> number >> name;
                if (directory.find(number) != directory.end())
                {
                    directory.erase(number);
                }
                directory.insert(make_pair(number, name));
            }
            else if (query == "find")
            {
                cin >> number;
                if (directory.find(number) == directory.end())
                    cout << "not found\n";
                else
                {
                    cout << directory.at(number) << "\n";
                }
            }
            else
            {
                cin >> number;
                directory.erase(number);
            }
        }
    }

public:
    void solve()
    {
        read_queries();
    }
};

int main()
{
    PhoneBook book;
    book.solve();

    return 0;
}
