#include <iostream>
using namespace std;

class bank
{

    int principal;
    int years;
    float rate;
    float returnvalue;

public:
    bank() {} // this constructor will do nothing
    bank(int p, int y, float r);
    bank(int p, int y, int r);
    void show();
};

bank ::bank(int p, int y, float r)
{

    principal = p;
    years = y;
    rate = r;

    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {

        returnvalue *= (1 + r);
    }
}

bank ::bank(int p, int y, int r)
{

    principal = p;
    years = y;
    rate = float(r) / 100;

    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {

        returnvalue *= (1 + rate);
    }
}

void bank ::show()
{
    cout << "principal ammount was " << principal << endl
         << "return value after " << years
         << " is " << returnvalue << endl;
}

int main()
{
    bank bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << " enter the value of p y r " << endl;
    cin >> p >> y >> r;
    bd1 = bank(p, y, r);
    bd1.show();

    cout << " enter the value of p y R " << endl;
    cin >> p >> y >> R;
    bd2 = bank(p, y, R);
    bd2.show();

    return 0;
}