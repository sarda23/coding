#include <stdio.h>
 
// Function to find inversion count of a given array
int findInversionCount(int arr[], int n)
{
    int inversionCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                inversionCount++;
            }
        }
    }
    return inversionCount;
}
 
int main()
{
    int arr[] = {1,2,9,8,100,20,3,7,59,900,1};
    int N = sizeof(arr)/sizeof(arr[0]);
 
    printf("The inversion count is %d", findInversionCount(arr, N));
 
    return 0;
}
