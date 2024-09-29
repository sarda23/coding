#include <bits/stdc++.h>
using namespace std;
// x to power n
int power(int x,int n){
	if(n==0)
		return 1;
	int xp2=power(x,n/2);
	int ans=xp2*xp2;
	if(n%2==1)
		ans=ans*x;
	return ans;
}
int main(){
	int x,n;
	cin>>x>>n;
	cout<<power(x,n);
}