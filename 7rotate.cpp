#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5,6};
    int c = arr[5];
    
    for (int i = 5; i >= 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = c;

    for (int i = 0; i <=5; i++)
        cout << arr[i] << " ";

    return 0;
}