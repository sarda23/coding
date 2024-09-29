#include <iostream>
using namespace std;

//base class
class emp
{

public:
    int id;
    float sal;
    emp(int inpid)
    {
        id = inpid;
        sal = 34;
    }
    emp() {} // default constructor the derived class will call
             // therefore u need this
};

//derived class       private members can't be inherited

class programmer : public emp
{ // default visibility mode is private
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    emp nishant(1), nikunj(2);
    cout << nishant.sal << endl;
    cout << nikunj.sal << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getdata();

    return 0;
}
