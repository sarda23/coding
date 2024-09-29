#include<iostream>
#include<stack>
using namespace std;
// program to sort an array using recursion
void insert(stack<int>& s, int ele){
    if(s.size()==0){
        s.push(ele);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
    return;
}
void reverse(stack<int>& s){
    if(s.size()==1)
       return;
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;   
}
int main(){
    stack<int> s;
    cout<<"enter the stack"<<endl;
    s.push(1); s.push(2); s.push(3); s.push(4); s.push(5);
    reverse(s);
    while(s.size()!=0){
      cout<<s.top()<<endl;
      s.pop();
    }
   return 0; 
}