#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3,4, 4, 5};
    int n = 6;
    int i, j, ans = 0;
    for (i = 0; i < n + 1; i++)
    {
        for (j = i+1; j < n + 1; j++)
            if (arr[i] == arr[j])
                ans = arr[i];
    }

    cout << "the repeated value is =" << ans;
}