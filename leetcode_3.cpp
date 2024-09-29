 #include<iostream>
 #include<string>
 #include<unordered_map>

 using namespace std;

 int solve(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0,n=s.size(),mx=0;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                mx=max(mx,j-i+1);
                j++;
            }
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return mx;
    }

int main(){
    string str;
    
    cin>>str;

    cout<<"Length of longest substring: "<<solve(str)<<endl;
}