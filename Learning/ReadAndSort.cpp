#include <iostream>
using namespace std;
int main()
{
    int num,negatives=0,positives=0,zeroes=0;
    cout<<"\n\nEnter -1 to exit"<<endl;
    cout<<"Enter any number : ";
    cin>>num;

    while (num!=-1)
    {
        if(num>0)
        positives++;
        else if (num<0)
        negatives++;
        else
        zeroes++;
        cout<<"\n\nEnter any number : ";
        cin>>num;
    }
    cout<<"total positives entered : "<<positives<<endl;
    cout<<"total negatives entered : "<<negatives<<endl;
    cout<<"total zeroes entered : "<<zeroes<<endl;

    return 0;
}