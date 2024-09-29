// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int nums[], int l, int h, int target){
        int pivot,result=-1,n=h-l+1;
        pivot = lowestelement(nums,0,n-1);
        result = bs(nums,0,pivot-1,target);
        if(result!=-1)
            return result;
        else
            return bs(nums,pivot,n-1,target);
    }
    int lowestelement(int nums[],int start,int end){
        int index,mid,n=end-start+1;
        int prev,next;
        
        while( start <= end ){
            mid= start + (end - start)/2;
            prev = (mid - 1 + n)%n;
            next = (mid + 1)%n;
            if(nums[start] <= nums[end])
            {    index = start;
             return index;
             }
            if(nums[prev]> nums[mid] && nums[next] > nums[mid]){
             index =  mid;
              return index;
            }
            else if(nums[mid] > nums[start])
                start = mid+1;
            else 
                end = mid-1;
        }
        return -1;
    }
    int bs(int nums[],int start,int end,int target){
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            //mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }
    
};

// { Driver Code Starts. 
int main() {
    int t;
    cout<<"enter the number of times to run the code i.e num of cases"<<endl;
    cin >> t;
    while(t--){
        int n;
        cout<<"enter the size of the array"<<endl;
        cin >> n;
        int A[n];
        cout<<"enter the elements of the array"<<endl;
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cout<<"enter the target to be searched"<<endl;
        cin >> key;
        Solution ob;           // creating object
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends