#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>> n;
    cout<<"enter the array "<<endl;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int i=0,j=1; long temp=0,sum=0;
    for(i=0;i<n;i++){
        temp+=j; j++;
        sum+=arr[i];
    }
    long a = temp - sum; j=1;
    temp =0; sum =0; 
    for(i=0;i<n;i++){
        temp+=j*j;
        j++;
        sum+=arr[i]*arr[i];
    }
    long b = temp - sum;
    b = b/a;
    cout<<"the required output is"<<endl;
    cout<<(b-a)/2<<endl; cout<<(a+b)/2<<endl;
    return 0;
}