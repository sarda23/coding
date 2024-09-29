#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    
    cin>>n;
    
    vector<int>temp(n);
    
    for(int i = 0;i < n; i++){
        cin>>temp[i];
    }

    vector<int>store(1001, 0);
    
    for(int i = 0; i < n; i++){
        store[temp[i]]++;
    }
    
    cout<<"the freq array is"<<endl;
    
    for(int i = 0; i < n; i++)
        cout<<store[i]<<"   "; 
    
    cout<<endl;
    
    vector<int>ans;

    for(int i = 0; i < 501; i++){
        if(store[i] > 0 && store[2 * i] == 1){
            for(int j = 0; j < store[i]; j++){
                ans.push_back(i);
            }
        }
    }
    
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}