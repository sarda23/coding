#include<iostream>
using namespace std;
int main(){
    string s="";
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++)
       s+=arr[i];
    for(int i=0;i<4;i++)
       cout<<arr[i]<<" ";   
       cout<<endl;
    for(int i=0;i<4;i++)
       cout<<(int)s[i]<<" ";   
    //cout<<s;
    return 0;   
}