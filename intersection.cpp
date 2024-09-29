#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};
    int i = 0, j = 0, n = 5, m = 4;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    return 0;
}