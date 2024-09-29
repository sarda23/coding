#include <iostream>
using namespace std;

int main()
{

    int arr[] = {566, 8, 56, 98, 23, 79};
    int size = 6, i, max, min;
    min = max = arr[0];
    for (i = 0; i < 6; i++)
    {

        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << " the max element in the array is = " << max << endl;
    cout << " the min element in the array is = " << min;

    return 0;
}