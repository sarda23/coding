#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5};
    int n = 5;
    int i, j, sum = 0, sum1 = 0;
    for (i = 0; i < n + 1; i++)
        sum += i;
    for (i = 0; i < n + 1; i++)
        sum1 += arr[i];

    cout << "the repeated element is = " << sum1 - sum;
    return 0;
}