#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    //vector<vector<int>>store{{2001,1001,3},{2001,1002,2},{2002,1003,1},{2002,1001,2},{2002,1002,3},{2001,1003,1}};

    int n;
    cin>>n;

    vector<vector<int>>store;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>store[i][j];
        }
    }
    map<int,int>mp1; // sorted -- so will have recors in ascending order
    unordered_map<int,int>points;
    points[1] = 10;
    points[2] = 6;
    points[3] = 4;
    points[4] = 3;
    points[5] = 2;
    points[6] = 1;
   
    for(auto &vec:store)
        mp1[vec[1]] += points[vec[2]];     
    
    vector<int>zero; // for storing zero points record
    int r,mx;
    for(auto &it:mp1){
        mx = it.second; // points
        if(it.second > mx){ // if 2 are equal only 1st will be taken
            mx = it.second;
            r  = it.first;  
        }
        if(it.second == 0)
            zero.push_back(it.first);
    }
    cout<<r<<" "<<mx;
    cout<<endl;

    for(int i=0;i<zero.size();i++)
        cout<<zero[i]<<" ";
}