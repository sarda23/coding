#include<bits/stdc++.h>
using namespace std;
string solve(vector<int>a){
	vector<int>temp;
	for(int i=0;i<a.size()-1;i++){
		temp.push_back((a[i]+a[i+1])%10);
	}
	return temp.size()==2?(to_string(temp[0])+to_string(temp[1])):solve(temp);
}
int main(){
	int n;
	cin>>n;
	int x;
	vector<int>nums;
	for(int i=0;i<n;i++){
		cin>>x;
		nums.push_back(x);
	}
	cout<<solve(nums);
	return 0;
}