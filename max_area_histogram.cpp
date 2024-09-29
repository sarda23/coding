// { Driver Code Starts
#include <iostream>
#include<vector>
#include<stack>
#include <algorithm>
using namespace std;
 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n){
        vector<long long> left,right;
        long long mx=0;
        long long width[n],area[n];
        
        left = nearestsmallertoleft(arr, n);
        right = nearestsmallertoright(arr, n);
        for(int i=0;i<n;i++)
             width[i]=right[i]-left[i]-1;
        for(int i=0;i<n;i++)
          area[i] = width[i]*arr[i];
        for(int i=0;i<n;i++)
            mx=max(mx,area[i]);
          
        return mx;    
    }
    vector<long long> nearestsmallertoleft(long long arr[], int n){
         vector<long long> left;
         stack<pair<long long,int>> s1;
         for(int i=0;i<n;i++){
             if(s1.size()==0)
              left.push_back(-1);
             else if(s1.size()>0 && s1.top().first<arr[i])
              left.push_back(s1.top().second);
             else if(s1.size()>0 && s1.top().first>=arr[i]){
                 while(s1.size()>0 && s1.top().first>=arr[i])
                       s1.pop();
                 if(s1.size()==0)   
                    left.push_back(-1);
                 else
                    left.push_back(s1.top().second);
             }
             s1.push({arr[i],i});
         }
         return left;
    }
 vector<long long> nearestsmallertoright(long long arr[], int n){
         vector<long long> right;
         int psudoindex=n;
         stack<pair<long long,int>> s;
         for(int i=n-1;i>=0;i--){
             if(s.size()==0)
              right.push_back(psudoindex);
             else if(s.size()>0 && s.top().first<arr[i])
              right.push_back(s.top().second);
             else if(s.size()>0 && s.top().first>=arr[i]){
                 while(s.size()>0 && s.top().first>=arr[i])
                       s.pop();
                 if(s.size()==0)   
                    right.push_back(psudoindex);
                 else
                    right.push_back(s.top().second);
             }
             s.push({arr[i],i});
         }
         reverse(right.begin(),right.end());
         return right;
    }
};
// { Driver Code Starts.

int main()
 {
    long long t;
    cout<<"enter the number of times you want to run the code, i.e test case"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
         cout<<"enter the size of the array"<<endl;
        cin>>n;
        
        long long arr[n];
        cout<<"enter the elements of the array"<<endl;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    }
	return 0;
}