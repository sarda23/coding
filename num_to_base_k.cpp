#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string str;
	while(n>0){
		int digit=n%k;
		n/=k;
		str.push_back(digit+'0');
	}
	reverse(str.begin(),str.end());
	cout<<str;
}