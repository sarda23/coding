#include<iostream>
using namespace std;

int main(){
string s="a1b2c3d4e";
s[1]= s[1]+s[0]-'0';
    cout<<s[1];
    return 0;
}