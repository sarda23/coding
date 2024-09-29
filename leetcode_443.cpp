#include<iostream>
#include<vector>
#include<string>

using namespace std;
void solve(vector<char>& chars) {
        int n = chars.size();

        int index = 0,i=0;

        while(i<n){
            char curr_char = chars[i];
            int curr_count = 0;
            // find count of duplicates
            while(i<n && chars[i] == curr_char){
                curr_count++;
                i++;
            }
            // now do the assign work
            chars[index] = curr_char;
            index++;

            if(curr_count>1){
                string count_str = to_string(curr_count);

                for(char &c:count_str){
                    chars[index] = c;
                    index++;
                }
            }
        }
    }

int main(){
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;

    vector<char>chars;
    for(char &ch:str){
        chars.push_back(ch);
    }
    solve(chars);
    string ans ="";

    for(int i=0;i<chars.size();i++){
        ans+=chars[i];
    }
    cout<<ans<<endl;
}