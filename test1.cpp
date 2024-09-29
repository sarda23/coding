#include<iostream>
#include<algorithm>
using namespace std;

int main(){
     string ar[] = {"geeksforgeeks", "geeks",
                           "geek", "geezer"};
    int n = sizeof(ar) / sizeof(ar[0]);
    sort(ar, ar + n);
    cout<<ar[1];
    cout<<n;
    
    return 0;
}