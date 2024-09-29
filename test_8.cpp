#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
		cin>>nums[i];
	int sum=0;
	for(int i=0;i<n;i++){
		int curr_sum=0;
		for(int j=i;j<n;j++){
			curr_sum=curr_sum^nums[j];
			sum+=curr_sum;
		}
	}
	cout<<sum;
}