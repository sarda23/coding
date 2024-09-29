#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>& nums, int n) {
        // Your code goes here
        sort(nums.begin(),nums.end());
        int c=1;
        for(int i=0;i<n;i++){
            if(c==nums[i]){
                c++; 
                continue;
            }
            else
                return c;
        }
        return c;
}
int main(){
    int n;
    vector<int>nums;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<MissingNumber(nums,nums.size());
}