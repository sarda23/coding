#include <iostream>
using namespace std;

class simple
{
    int data1, data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void simple ::printdata()
{

    cout << "the value of data is " << data1 << " and " << data2 << endl;
}

int main()
{
    simple s(1, 23);
    s.printdata();
    return 0;
}