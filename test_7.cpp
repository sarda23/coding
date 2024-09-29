#include <iostream>
#include<bits/stdc++.h>
using namespace std;
set<vector<int>>st;
void solve(int target,vector<int>arr,int indx,vector<int>&temp){
    if( target==0){
        st.insert(temp);
        return;
    }
    if(indx<0 or indx>arr.size())return;
    
    if(arr[indx]<=target){
        temp.push_back(indx);
        solve(target-arr[indx],arr,indx+1,temp);
        temp.pop_back();
    }
    solve(target,arr,indx+1,temp);
}
int main() {
//int target=5;
vector<int>temp;
//vector<int>arr={2, 3, 5, 1, 4, 1, 1, 1, 1, 1};

int target,n;
    cin>>target>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

solve(target,arr,0,temp);
vector<vector<int>>ans;
while(!st.empty()){
    vector<int>xy=*(st.begin());
    ans.push_back(xy);
    st.erase(xy);
}
int sz=ans.size();
for(int i=0;i<sz;i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}