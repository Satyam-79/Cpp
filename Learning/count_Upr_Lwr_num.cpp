#include <iostream>
using namespace std;
int main()
{
    char ch;
    int lowers=0,uppers=0,numbers=0;
    cout<<"\nEnter the character : ";
    cin>>ch;
    do
    {
        if(ch>='A'&&ch<='Z')
        uppers++;
         if(ch>='a'&&ch<='z')
        lowers++;
         if(ch>='0'&&ch<='9')
        numbers++;
        cout<<"\nEnter another character.( *to exit) : ";
        cin>>ch;

    } while (ch!='*');
    cout<<"\nTotal lowers case entered = "<<lowers<<endl;
    cout<<"\nTotal uppers case entered = "<<uppers<<endl;
    cout<<"\nTotal numbers case entered = "<<numbers<<endl;

    return 0;
}


