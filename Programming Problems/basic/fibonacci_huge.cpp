#include <iostream>
using namespace std;
#define max 100000000000000
long long int Fibonacci(long long int n,long long int m)
{
    long long int arr[2];
    arr[0] = 0;
    arr[1] = 1;
    if (n <= 1)
    {
        return n;
    }
    for (long long int i = 2; i <= n; i++)
    {
        arr[2] = (arr[1] + arr[0])%m;
        arr[0] = arr[1];
        arr[1] = arr[2];
    }

    return arr[2];
}
long long int findSeries(long long int m)
{
    long long int arr[]={0,1,1},count=0;
    if(m<=1)
	return m;
    for(long long i=2;i<max;i++)
    {
        arr[2] = (arr[1] + arr[0])%m;
        arr[0] = arr[1];
        arr[1] = arr[2];
        count++;
        if(arr[1]==1 && arr[0]==0)
        {
            break;
        }
    }
    return count;
}
int main()
{
    long long int n = 0,m=0;
    // cout << "Enter N th Number for Fibonacci : ";
    cin >> n>>m;
    if(n%m<n)
    {
        long long int period=findSeries(m);
        long long int newNum=n%period;
        cout<<Fibonacci(newNum,m);
    }
    else
    {
        cout<<Fibonacci(n,m);
    }

    return 0;
}