#include <iostream>
#include <algorithm>
#include<functional>
using namespace std;

int main()
{
    // function objects (functor): function wrapped in a class
    // so that it is available like an object

    int arr[] = {1, 73, 4, 12, 54, 69, 77};
    sort(arr, arr+7, greater<int>());    // takes a function object
    for (int i = 0; i < 6; i++)
    {

        cout << arr[i] << endl;
    }
    return 0;
}