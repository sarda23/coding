#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>parcel,int k){
	int ans=0;
	int n=parcel.size();
	
	int capacity=k-n;
	unordered_set<int>s;
	for(int i=0;i<n;i++){
		s.insert(parcel[i]);
	}
	for(int i=1;capacity>0;i++){
		if(s.find(i)==s.end()){
			ans+=i;
			capacity--;
		}
	}
	return ans;
}
int main(){
 	int n;
 	cin>>n;
 	vector<int>parcel;
 	for(int i=0;i<n;i++){
 		int x;cin>>x;
 		parcel.push_back(x);
 	}
 	cout<<solve(parcel,9);
}