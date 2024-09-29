#include <bits/stdc++.h>
using namespace std;
int main(){

	vector<int>nums={1,1,2,2,2,3,3};
	unordered_map<int,int>mp;
	for(auto i:nums)
		mp[i]++;

	sort(nums.begin(),nums.end(),[&](int a,int b){
		return mp[a]==mp[b]?a>b:mp[a]<mp[b];
	});

	for(auto i:nums)
		cout<<i<< " ";
}