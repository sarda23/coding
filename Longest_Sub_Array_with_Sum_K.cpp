// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        int i=0,j=0,sum=0,mx=0;
        while(j<n){
            sum+=arr[j];
            if(sum<k)
              j++;
            else if(sum==k){
               mx=max(mx,j-i+1);
               j++;
            }
            else if(sum>k){
                while(sum>k){
                   if(arr[i]>0){
                     sum-=arr[i];
                     i++;
                   }
                   else if(arr[i]<0)
                     i++;
                }
             j++;
        }
    }
        return mx;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;
    cout<<"enter the number of test cases"<<endl;
    cin>>t;
	while(t--)
	{
	    int n, k;
        cout<<"enter the size of the array and the value k"<<endl;
	    cin>> n >> k;
	    int a[n];
	    cout<<"enter the elements of the array"<<endl;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
       cout<<"The longest size of subarray is = "<<endl;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends