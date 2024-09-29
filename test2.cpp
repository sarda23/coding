#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number n"<<endl;
    int n;
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
         p*=i; 
    }
    cout<<"the factorial is of n is = "<<p<<endl;
    return 0;  
}