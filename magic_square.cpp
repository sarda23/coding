#include <bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector<vector<int>> s){
    int n=s.size(),m=s[0].size();
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum+=s[i][j];
        }
        ans+=abs(15-sum);
    }
    return ans;
}

int main(){
    int n=3;
    vector<vector<int>>nums(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>nums[i][j];
        }
    }
    int t=formingMagicSquare(nums);
    cout<<t;
}
