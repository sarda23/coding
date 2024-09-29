#include <iostream>
using namespace std;
class Base
{
    public:
    void virtual Display()
    {
        cout << "Base Class Display Function";
    }
};

class Derived:public Base
{
    public:
    void Display()
    {
        cout << "Derived Class Display Function";
    }
};

int main()
{
    Base *p = new Derived();
    p->Display();
    return 0;
}