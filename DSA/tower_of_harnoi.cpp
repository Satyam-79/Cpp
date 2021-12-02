#include <iostream>
using namespace std;

void towerOfHanoi(int n, char rod_A, char rod_C, char rod_B)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << rod_A << " to rod " << rod_C << endl;
        return;
    }
    towerOfHanoi(n - 1, rod_A, rod_B, rod_C);
    cout << "Move disk " << n << " from rod " << rod_A << " to rod " << rod_C << endl;
    towerOfHanoi(n - 1, rod_B, rod_C, rod_A);
}
int main()
{
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}