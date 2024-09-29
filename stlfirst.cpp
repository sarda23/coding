#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
    cout<<"enter";
    cin>>n;
    vector<int> temp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    for(int i=0;i<n;i++)
        cout<<temp[i]<<" ";
    
    return 0;
}