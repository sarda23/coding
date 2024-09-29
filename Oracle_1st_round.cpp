#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;

	unordered_map<char,int>mp;
    
    

	for(int i=0;i<s.size();i++){
		char ch=s[i];
		if(ch<'A' or (ch>'Z' and ch<'a') or ch>'z')
			continue;
		
		if(ch>='a')
			mp[ch]++;
		else
			mp[ch+32]++;
	}
	for(auto it:mp)
		cout<<it.first<< " " << it.second<<endl;
	
	
}