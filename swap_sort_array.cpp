#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>nums{2,4,5,1,3};
	vector<pair<int,int>>v;
	for(int i=0;i<5;i++){
		v.push_back({nums[i],i});
	}
	sort(v.begin(),v.end());
	int swaps=0;
	for(int i=0;i<5;i++){
		if(v[i].second==i)
			continue;
		else{
			swaps++;
			swap(v[i],v[v[i].second]);
			i--;
		}
	}
	cout<<swaps;
}