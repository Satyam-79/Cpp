#include <iostream>
using namespace std;

class Singleton
{
public:
    static Singleton *getInstance();
    void showMessage()
    {
        cout << "\nHello Singleton!";
    }

private:
    Singleton() {}
    static Singleton *instance;
};

Singleton *Singleton::instance = 0;
Singleton *Singleton::getInstance()
{
    if (!instance)
        instance = new Singleton();
    return instance;
}
int main()
{
    Singleton *s1 = Singleton::getInstance();
    s1->showMessage();
    return 0;
}