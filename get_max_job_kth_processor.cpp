#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	k--;
	vector<int>arr(n,1);

	int sum=n,maxjob=1;

	while(sum<=m){
		arr[k]++;
		maxjob=arr[k];

		for(int i=k-1;i>=0;i--)
			if(arr[i+1]-arr[i]>1)
				arr[i]++;
		for(int i=k+1;i<n;i++)
			if(arr[i-1]-arr[i]>1)
				arr[i]++;
		
		sum=0;
		for(int i=0;i<n;i++)
			sum+=arr[i];	
	}
	cout<<maxjob-1;
}