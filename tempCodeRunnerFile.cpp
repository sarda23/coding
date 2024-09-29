#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        int left=0,right=1,n=prices.size(),profit=0;
        while(right<n){
            if(prices[right]>prices[left]){
                profit=max(profit,prices[right]-prices[left]);
            }
            else
                left=right;
            right++;
        }
        return profit;
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maxProfit(nums);
}