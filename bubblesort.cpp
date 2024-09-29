#include <iostream>
using namespace std;
void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout<<endl;
}
void bubblesort(int *a, int n)
{      int count=0;
    for (int i = 0; i < n - 1; i++)     // for pass
    {     
        cout<<" working on pass number "<<i+1 <<endl;
        for (int j = 0; j < n - i - 1; j++)   // for comparison
        {
            if (a[j] > a[j + 1])
            {    count++;
                swap(a[j], a[j + 1]);
            }
            if(count==0){
             cout<<" already sorted "<<endl;
             return; 
            }
        }
    }
        
}
int main()
{
    //int a[] = {12, 54, 65, 7, 23, 9};
    int a[] = {1,2,3,4,5,6};
    int n = 6;
    printarray(a, n); // before sort
    bubblesort(a, n);  // sort
    printarray(a, n);  // after sort
    return 0;
}