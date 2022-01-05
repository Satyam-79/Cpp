#include <iostream>
using namespace std;
#define max 100000000000000
long long int Fibonacci(long long int n,long long int m)
{
    int a=0,b=1,c=1;
    long long int i = 2;
    int sum = 0;
    if(m==1 || n==1 || ( m==0 && n>1)){
        sum+=1;
    }
    if (n <= 1)
    {
        return n;
    }
    
    do
    {
        int tem;
        int temp2;
        temp2 = b + a;
        c = temp2 % 10;
        a = b;
        b = c;
        
        if (i>=m)
        {
            tem = sum + c;
            sum = tem % 10;
        }
        //cout << "c" << c << endl<< "s" << sum << endl<< "i " << i << endl;
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
    long long int n = 0,m=0,startNum=0;
    // cout << "Enter N th Number for Fibonacci : ";
    cin >> m>>n;
    if(n<m){
        return 0;
    }
    
    
        long long int period = findSeries();
        long long int newNum = (n % period);
        if(n>period)
        {
            newNum+=60;
        }
        startNum = m % period;
        //cout<<"p "<<period<<endl<<"n "<<newNum<<endl;
        cout<<Fibonacci(newNum,startNum);
    

    return 0;
}
