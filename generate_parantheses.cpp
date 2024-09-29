#include <bits/stdc++.h>
using namespace std;
vector<string>ans;
void solve(string &s,int open,int close){
	if(open==0 and close==0)
		ans.push_back(s);
	if(open>0){
		s.push_back('(');
		solve(s,open-1,close);
		s.pop_back();
	}
	if(close>0){
		if(open<close){
		s.push_back(')');
		solve(s,open,close-1);
		s.pop_back();
		}
	}
}
int main(){
	int n;
	cin>>n;
	string s="";
	solve(s,n,n);
	for(auto i:ans){
		cout<<i<<",";
	}
}