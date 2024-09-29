#include <iostream>
using namespace std;
 

// constructor is called for making the object

class number
{
    int a;

public:
    number()
    {          // constructor that does nothing
        a = 0; // even if this is not there
               // compiler gives default copy constructor
    }

    number(int num)
    {
        a = num;
    }

    number(number &obj) // copy constructor
    {
        cout << " copy constructor was called !!!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << " the num for this object is "
             << a << endl;
    }
};

int main()
{
    number x, y, z(45),z2; // because of this u need the constructor which
    z.display();        // does nothing
    y.display();
    x.display();
    // z1 should exactly resembles z or x or y
    number z1(x); // z1 is made with the help of x  copy constructor invoked
    z1.display();
    
    z2= z;       // not called here
    z2.display();
    number z3=z;  // copy constructor called here
    z3.display();
    return 0;
}