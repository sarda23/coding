#include<bits/stdc++.h>
using namespace std;

vector<int> kFactorization(int num, vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<int>ans;int n=nums.size();
    reverse(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(num%nums[i]!=0)
            continue;
        else{
            ans.push_back(num);
            num=num/nums[i];
        }
    }
    ans.push_back(1);
    reverse(ans.begin(),ans.end());
    if(ans.size()==1){
        ans.clear();
        ans.push_back(-1);
        return ans;
    }
    return ans;
}

int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>factr(k);
    for(int i=0;i<k;i++){
        cin>>factr[i];
    }
    vector<int>ans;
    ans=kFactorization(n,factr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}