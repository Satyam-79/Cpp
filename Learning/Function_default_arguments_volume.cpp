#include <iostream>
using namespace std;
int volume(int length, int width = 3, int height = 4);
int main()
{
    cout << volume(4, 6, 2);
    cout << volume(4, 6);
    cout << volume(4);

    return 0;
}
int volume(int length, int width, int height)
{
    cout << "\n Length = " << length << " Width = " << width << " height = " << height << "\nVolume = ";
    return length * width * height;
}