#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    
    int n,k=0,area=l*b,num;
    while(k++){
        num=area/k;
        n=sqrt(num);
        if(n*n==num)
            break;
    }
    cout<<n<<"  "<<k;
}