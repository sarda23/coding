#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class nishant
{
public:
    T1 a;
    T2 b;
    T3 c;
    nishant(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << " the value of a is = " << a << endl;
        cout << " the value of b is = " << b << endl;
        cout << " the value of c is = " << c << endl;
    }
};

int main()
{

    nishant<> n(4, 6.4, 'd');
    n.display();
    cout << endl;
    nishant<float, char, char> g(4.2, 'p', 'd');
    g.display();

    return 0;
}