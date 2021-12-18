// graph adjacency lists vector
#include <iostream>
#include <vector>
using namespace std;

void makeEdge(vector<int> list[], int u, int v)
{
    list[u].push_back(v);
    list[v].push_back(u);
}
void printGraph(vector<int> list[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << "Vertex " << i << "  ->  ";
        for (auto x : list[i])
        {
            cout << x << " ,  ";
        }
        cout << endl;
    }
}
int main()
{
    int V = 5;
    vector<int> list[V];
    makeEdge(list, 0, 1);
    makeEdge(list, 0, 4);
    makeEdge(list, 1, 2);
    makeEdge(list, 1, 3);
    makeEdge(list, 1, 4);
    makeEdge(list, 2, 3);
    makeEdge(list, 3, 4);

    printGraph(list, V);
    return 0;
}