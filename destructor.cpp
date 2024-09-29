#include <iostream>
using namespace std;

// destructor do not take argument nor does it return any value
// compiler runs destructor this implicitly
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << " this is the time when constructor is called for obj number =" << count << endl;
    }

    ~num()
    {
        cout << " this is the time when destructor is called for obj number = " << count << endl;
        count--;
    }
};

int main()
{
    cout << " we r in the main function" << endl;
    cout << " creating the first obj n1 " << endl;
    num n1;                                                          // first time constructor is called
    {
        cout << " entering this block" << endl;
        cout << " creating two more obj" << endl;
        num n2, n3;
        cout << " exiting this block" << endl;
    }
    cout << "back to main function" << endl;
    return 0;
}