#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;
void solve(vector<int>&arr,int index,int &target,vector<int>temp,int &sum){
	if(sum==target){
			ans.push_back(temp);
	}
	for(int i=index;i<arr.size();i++){
		sum+=arr[i];
		temp.push_back(i);
		solve(arr,i+1,target,temp,sum);
		temp.pop_back();
		sum-=arr[i];
    }
    return;
}
int main(){

	int target,n;
	cin>>target>>n;
	
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int>temp;
	int sum=0;
	solve(arr,0,target,temp,sum);
	for(int i=0;i<ans.size();i++){
		vector<int>temp;
		temp=ans[i];
		for(int j=0;j<temp.size();j++){
			cout<<temp[j]<<" ";
		}
		cout<<endl;
	}

}