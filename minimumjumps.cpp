#include <iostream>
using namespace std;

int main()
{

    int i, count = 0;
    //int arr[] = {1, 3, 5, 8, 9, 2, 6, 8, 9};
    //int n = 11;
    int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    int n = 10;
    /*cout << "enter the size of the array " << endl;
    cin >> n;
    cout << "enter the array elements " << endl;
    int *arr = new int(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
   */
    for (i = 0; i < n; i+=0 )
    {
        count++;
        if (arr != 0)
            i += arr[i];
        if (arr[i] == 0)
            return -1;

        if (i >= n - 1)
            break;
        if (i < n - 1)
            continue;
    }
    cout << "the number of jumps are = " << count << endl;
}