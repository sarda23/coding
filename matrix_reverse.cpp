#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<vector<int>> nums(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>nums[i][j];
		}
		cout<<endl;
	}
	reverse(nums.begin(),nums.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<nums[i][j]<<" ";
		}
		cout<<endl;
	}

}