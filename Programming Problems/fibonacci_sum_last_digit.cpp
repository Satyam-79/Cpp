#include <iostream>
using namespace std;
#define max 100000000000000
long long int Fibonacci(long long int n)
{
    long long int i = 2;
    int arr[2];
    int sum = 1;
    arr[0] = 0;
    arr[1] = 1;
    if (n <= 1)
    {
        return n;
    }
    do
    {
        int temp = 0;
        arr[2] = (arr[1] + arr[0]) % 10;
        arr[0] = arr[1];
        arr[1] = arr[2];
        temp = sum + arr[2];
        sum = temp % 10;
        // cout << "a" << arr[2] << endl<< "s" << sum << endl<< "i " << i << endl;
        i++;
    } while (i <= n);

    return sum;
}
long long int findSeries()
{
    long long int arr[] = {0, 1, 1}, count = 0;
    for (long long i = 2; i < max; i++)
    {
        arr[2] = (arr[1] + arr[0]) % 10;
        arr[0] = arr[1];
        arr[1] = arr[2];
        count++;
        if (arr[1] == 1 && arr[0] == 0)
        {
            break;
        }
    }
    return count;
}
int main()
{
    long long int n = 0;
    // cout << "Enter N th Number for Fibonacci : ";
    cin >> n;
    
        long long int period = findSeries();
        long long int newNum = n % period;
        
        // cout<<"p "<<period<<endl<<"n "<<newNum<<endl;
        cout<<Fibonacci(newNum);
    

    return 0;
}
