#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s1;
    vector<int> cur(26);
    cout<<"enter the string"<<endl;
    cin>>s1;
    for(char c :s1){  
    cur[c-'a']++;
    }
    cout<<"the string entered is = "<<s1<<endl;
    for(int i=0;i<26;i++){
    cout<<"the current vector- alphabet count is ="<<cur[i]<<endl;

    }
    return 0;
}