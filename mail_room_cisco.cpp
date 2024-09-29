#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>store;
void getans(vector<int>&temp,vector<bool>&vis,vector<int>adj[]){
    for(int i=0;i<temp.size();i++){
        for(auto it:adj[temp[i]]){
            vis[it]=1;
        }
    }
}
void solve(vector<int>adj[],int n,int i,vector<int>temp){
    if(i==n){
        store.push_back(temp);
        return;
    }
    for(int j=i;j<n;j++){
 //   solve(adj,n,j+1,temp);
        temp.push_back(i);
        solve(adj,n,j+1,temp);
        temp.pop_back();
    }
}
int main() {
    int n;
    cin>>n;
    vector<int>adj[n];
    int m;
    cin>>m;
    vector<int>xyz;
    for(int i=0;i<2*m;i++){
        int x;
        cin>>x;
        xyz.push_back(x-1);
    }
   int i=0;int j=m;
   while(j<2*m){
       adj[xyz[i]].push_back(xyz[j]);
       adj[xyz[j]].push_back(xyz[i]);
       i++;j++;
   }
    
    vector<int>temp;
    solve(adj,n,0,temp);
   int ans=INT_MAX;
    for(int i=0;i<store.size();i++){
        if(store[i].size()>0){
            vector<bool>vis(n,0);
            bool flg=1;
            getans(store[i],vis,adj);
            for(int i=0;i<vis.size();i++){
                if( vis[i]!=1)flg=0;
            }
            if(flg and store[i].size()<ans){
                ans=store[i].size();
            }
        }
    }
    cout<<ans<<endl;
    
    for(int i=0;i<store.size();i++){
        for(int j=0;j<store[i].size();j++){
            cout<<store[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}