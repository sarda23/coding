#include <iostream>
using namespace std;
int maxsum(int *a, int n)
{          int rightsum,leftsum;
    if (n == 1)
        return a[0];
    int m = n / 2;
    int leftmss = maxsum(a, m);
    int rightmss = maxsum(a + m, n - m);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        rightsum = max(rightsum, sum);
    }
    sum = 0;
    for (int i = 0; i < (m - 1); i++)
    {
        sum += a[i];
        leftsum = max(leftsum, sum);
    }
    int ans = max(leftmss, rightmss);
    return max(ans, leftsum + rightsum);
}
int main()
{
    int i, n;
    cout << " enter the size of array = " << endl;
    cin >> n;
    int *a = new int(n);
    cout << " enter the element of the array " << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    int ans, sum;
    ans = maxsum(a, n);
    cout << " the max sum of the subarray is = " << ans;
    return 0;
}