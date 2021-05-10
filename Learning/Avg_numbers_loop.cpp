#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,count=0;
    float avg;
    cout<<"\nEnter -1 to end";
    cout<<"\nEnter the number : ";
    cin>>num;
    while (num !=-1)
    {
        count++;
        sum=sum+num;
        cout<<"\nEnter the number(-1 to stop) : ";
        cin>>num;
    }
    avg=(float)sum/count;
    cout<<"\nAverage : "<<avg;
    return 0;
}