#include <bits/stdc++.h>
using namespace std;
int fun(*p){
	return --*p++;
}
int main(){
	int dp[]={1,2,7,6,8,10};
	int d=fun(&dp[-2]);
	cout<<d;
}
