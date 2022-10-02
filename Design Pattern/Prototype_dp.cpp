#include <iostream>
using namespace std;
#include <memory>
class animal
{
public:
    virtual ~animal() = default;
    virtual std::unique_ptr<animal> create() = 0;
    virtual std::unique_ptr<animal> clone() = 0;
    virtual string getType() = 0;
};
class dog : public animal
{
    string specie = "Dog\n";
    std::unique_ptr<animal> create() { return std::make_unique<dog>(); }
    std::unique_ptr<animal> clone() { return std::make_unique<dog>(*this); }
    string getType() { return specie; }
};
class cat : public animal
{
    string specie = "Cat\n";
    std::unique_ptr<animal> create() { return std::make_unique<cat>(); }
    std::unique_ptr<animal> clone() { return std::make_unique<cat>(*this); }
    string getType() { return specie; }
};
void who_am_i(animal *who)
{
    auto new_who = who->create();
    cout << new_who.get()->getType();
    auto duplicate_who = who->clone();
    cout << new_who.get()->getType();

    delete who;
}
int main()
{
    who_am_i(new dog());
    who_am_i(new cat());
    return 0;
}