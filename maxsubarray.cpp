#include <iostream>
using namespace std;


// only works when atleast one +ve element in the array  for solving this put ans = INT_MIN
int main()
{

    int i, j, n, sum, ans=INT_MIN;

    cout << "enter the size of the array " << endl;
    cin >> n;

    int *a = new int(n); // dynamic array

    cout << "enter the element of the array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 1; j <= n; j++)
        {
            if (i + j > n)
                break;
            sum += a[i + j - 1];
            ans = max(ans, sum);
        }
    }
    cout << "the max sum of the subarray is =" << ans;
    return 0;
}