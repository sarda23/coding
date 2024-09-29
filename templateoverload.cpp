#include <iostream>
using namespace std;

template <class T>
class nish
{

public:
    T data;
    nish(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void nish<T>::display()
{

    cout << data << endl;
}

void fun(int a)
{
    cout << "I am first fun " << a << endl;
}
template <class T>
void fun(T a)
{
    cout << "I am template fun" << a << endl;
}

template <class T>
void fun1(T a)
{
    cout << "I am template fun " << a << endl;
}


int main()
{

    //nish<float> n(5.7);
    //nish<char> n('c');
    //cout << n.data << endl;
    //n.display();
    //fun(4); 
    fun1(4);             // exact match takes highest priority
    return 0;
}