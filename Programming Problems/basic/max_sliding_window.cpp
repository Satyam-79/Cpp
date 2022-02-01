#include <iostream>
#include <vector>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::max;
using std::vector;
using namespace std;

// static vector<int>::const_iterator it;

// void showlist(list<int> g)
// {
//     list<int>::iterator iit;
//     for (iit = g.begin(); iit != g.end(); ++iit)
//         cout << "\tss" << *iit;
//     cout << '\n';
// }

// bool smaller(const int &value)
// {
//     return *it > value;
// }

void max_sliding_window_naive(vector<int> const &A, int w)
{
    for (size_t i = 0; i < A.size() - w + 1; ++i)
    {
        int window_max = A.at(i);
        for (size_t j = i + 1; j < i + w; ++j)
            window_max = max(window_max, A.at(j));

        cout << window_max << " ";
    }

    return;
}

// void max_sliding_window(vector<int> const &A, int w)
// {
//     list<int> window;
//     it = A.begin();
//     auto et = A.begin();

//     while (it != A.end())
//     {
//         window.remove_if(smaller);
//         window.push_back(*it);
//         // showlist(window);
//         // cout << endl;

//         if (it - et == w - 1)
//         {
//             cout << window.front() << " ";
//             if (*et == window.front())
//             {
//                 window.pop_front();
//             }

//             et++;
//         }

//         it++;
//     }
// }
void window_deque(vector<int> &a, int w)
{
    deque<int> container;
    auto it = a.begin();
    auto et = a.begin();
    container.push_back(*it);
    it++;
    while (it != a.end())
    {

        while (container.size() >= 1 && container.back() < *it)
        {
            container.pop_back();
        }
        container.push_back(*it);
        if (it - et == w - 1)
        {
            cout << container.front() << " ";
            if (*et == container.front())
            {
                container.pop_front();
            }

            et++;
        }

        it++;
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    vector<int> A(n);
    for (size_t i = 0; i < n; ++i)
        cin >> A.at(i);

    int w = 0;
    cin >> w;

    // max_sliding_window(A, w);
    if (n == 1)
    {
        cout << A.front();
    }
    else if (w == 1)
    {
        for (auto &&i : A)
        {
            cout << i << ' ';
        }
    }
    else
        window_deque(A, w);

    return 0;
}
