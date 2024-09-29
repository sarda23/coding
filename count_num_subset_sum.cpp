// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution{
	public:
	int dp[101][10001];
	void solve(int arr[],int n,int sum){
	    for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
              if(arr[i-1]<=j)
              dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
              else
              dp[i][j]=dp[i-1][j];
	        }
	    }
	}
	int perfectSum(int arr[], int n, int sum){
        // Your code goes here
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                  dp[i][j]=0;
                if(j==0)
                  dp[i][j]=1;
            }
        }
        solve(arr,n,sum);
        return dp[n][sum];
	}
	  
};
// { Driver Code Starts.
int main() 
{
   	int t;
    cout<<"enter number of test cases "<<endl;
    cin >> t;
    while (t--)
    {
        int n, sum;
        cout<<"enter the value of n and the sum that you need to find "<<endl;
        cin >> n >> sum;

        int a[n];
        cout<<"enter the elements of the array "<<endl;
        for(int i = 0; i < n; i++)
        	cin >> a[i];
	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
    }
    return 0;
}
  // } Driver Code Ends