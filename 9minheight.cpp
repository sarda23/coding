#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {1, 2, 2, 2, 3, 3, 4, 6, 7, 10};
    int n = 10;

    sort(a, a + n);
    int k;
    cout << " enter the value of k " << endl;
    cin >> k;
    int ans = a[n - 1] - a[0];
    int smallest = a[0] + k;
    int largest = a[n - 1] - k;
    int mi, mx;
    for (int i = 0; i < n; i++)
    {
        mi = min(smallest, a[i + 1] - k);
        mx = max(largest, a[i] + k);
        if (mi < 0)
            continue;
        ans = min(ans, mx - mi);
    }
    cout << " the min diff is = " << ans;
    return 0;
}