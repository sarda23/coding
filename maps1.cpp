#include <iostream>
#include<vector>
#include <map>
#include<iterator>
using namespace std;
int main()
{
    cout << "enter the size of the array" << endl;
    int n;
    cin >> n;

    vector arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    map<int, int>::iterator iter;
    for (iter = freq.begin(); iter != freq.end(); iter++)

        cout << iter->first << " " << iter->second << endl;

    return 0;
}