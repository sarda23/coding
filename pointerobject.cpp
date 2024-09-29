#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    void getdata()
    {

        cout << " the real part is = " << real << endl;
        cout << " the imag part is = " << imag << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imag = b;
    }

}; 


int main()
{
    complex c1;
    complex *ptr = &c1;
    (*ptr).setdata(1,54);        // pointer to object

    // arrow operartor
    ptr->setdata(1,54);
    (*ptr).getdata();

    //array of object

    complex *p= new complex[3];
    p->setdata(1,4);
    p->getdata();
       

    return 0;
}