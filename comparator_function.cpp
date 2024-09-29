#include<bits/stdc++.h>
using namespace std;

/*static bool comp(int a,int b){
	return a>b;
}
*/
int main(){
	vector<int>nums={1,6,3,7,2,9,0};
	//sort(nums.begin(),nums.end(),comp);

	sort(nums.begin(),nums.end(),[&](int a, int b){
            return a==b ? a > b : a < b;
        });
	for(auto i:nums){
		cout<<i<<" ";
	}
}