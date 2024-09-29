#include<iostream>
#include<string>
using namespace std;
int main(){
    string st = "100 eggs have to be sold";
    int num;
    string remain;
    for(int i =0;i<st.size();i++){
        string temp ="";
        while(st[i] != ' '){
            temp+=st[i];
            i++;
        } 
        i++;
        remain = st.substr(i,st.size()-1);
        num = 3*stoi(temp);
        break;
    }
    string temp;
    temp += to_string(num);
    temp=temp+" "+remain;
    cout<<temp;
}
