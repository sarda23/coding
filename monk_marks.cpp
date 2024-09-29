#include <bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<set>
using namespace std;
int main(){
	map<int,multiset<string>> mp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string name; int marks;
		cin>> name>>marks;
		mp[-1*marks].insert(name);
	}
    for(auto &student:mp){
       auto name=student.second;
	   int mark=student.first;
	   for(auto &na:name)
       cout<<na<<" "<<-1*mark<<endl;
	}
	return 0;
}