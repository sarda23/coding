#include <iostream>
#include<stdio.h>
#include<algorithm>
#include <unordered_map>
using namespace std;
int n, target;
void twosum(int *arr, int target)
{
    unordered_map<int, int> index;
    for (int i = 0; i < n; i++)
    {
        if (index.find(target - arr[i]) != index.end())
        {
            cout << "the index's are" << endl;
            cout << i << index[target - arr[i]] << endl;
        }
        index[arr[i]] = i;
    }
    cout << " just to see the hash table" << endl;
    for (auto x : index)
        cout << x.first << "  " << x.second << endl;
}
int main()
{
    cout << "enter the size of the array" << endl;
    cin >> n;
    int *arr = new int(n);
    cout << "enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target" << endl;
    cin >> target;
    twosum(arr, target);
    return 0;
}