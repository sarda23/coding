#include <iostream>
using namespace std;

struct pair1
{
    int min, max;
};

struct pair1 getminmax(int arr[], int n)
{

    struct pair1 minmax;
    int i;

    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];

        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = 6;

    struct pair1 minmax = getminmax(arr, arr_size);

    cout << "min element is " << minmax.min << endl;
    //cout << "max element is " << minmax.max << endl;

    return 0;
}