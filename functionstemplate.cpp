#include <iostream>
using namespace std;

/*float funavg(int a, int b)
{
    float avg = ((a + b) / 2.0);
    return avg;
}
*/

// with single parameter
template<class T>
void swaap(T &a , T &b){
    T temp = a;
    a = b;
    b= temp;
}

// with multiple parameter
template<class T1, class T2>
float avg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a = avg(5, 6);
    cout << "the avg of these two number is = " << a << endl;
        int x = 5, y=7;
    swaap(x , y);
    cout << x << ""   "" << y<< endl;


    return 0;
}