#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k){
        priority_queue<int> maxh; 
        int i=0,n=r-l+1;
        cout<<maxh.size()<<endl;
        cout<<k<<endl;
        for(i=0;i<n;i++){
            if(maxh.size()>k)
               maxh.pop();
            else
               maxh.push(arr[i]);
        }
        return maxh.top();
    }
};
int main()
{
    int test_case;
    cout<<"enter the number of test cases"<<endl;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cout<<"enter the number of elements"<<endl;
        cin>>number_of_elements;
        int a[number_of_elements];
        cout<<"enter the elements"<<endl;
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
        cout<<"enter the kth value"<<endl;
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}