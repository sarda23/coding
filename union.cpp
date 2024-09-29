#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 3, 5, 7};
    int i, j, n = 5, m = 4;

    set<int> s;
    for (i = 0; i < n; i++)
        s.insert(a[i]);
    for (j = 0; j < m; j++)
        s.insert(b[j]);
    cout << s.size();
    return 0;
}