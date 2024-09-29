#include <bits/stdc++.h>
using namespace std;
int findgcd(int arr[],int n){
	int res=arr[0];
	for(int i=1;i<n;i++){
		res=__gcd(arr[i],res);
		if(res==1)
			return 1;
	}
	return res;
}
int main(){
	int arr[]={2,4,6,8,16};
	int n=5;
	cout<<findgcd(arr,n)<<endl;
}