#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *ptr = &a;

    cout << " the value of a is = " << *ptr << endl;

    // new operator

    int *p = new int(40);
    cout << " the value of address p is = " << *p << endl;

    int *arr = new int[3];    // create dynamic array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;     // delete arr
    cout << " the value of arr[0] is = " << arr[0] << endl;
    cout << " the value of arr[1] is = " << arr[1] << endl;
    cout << " the value of arr[2] is = " << arr[2] << endl;

    return 0;
}