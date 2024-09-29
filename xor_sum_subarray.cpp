#include <bits/stdc++.h>
using namespace std;
int main(){
	int A[]={2,3,5};

    long ans = 0;
    for (int i = 30; i >= 0; --i){
        int count[] = {1,0};
        int cur = 0;
        for (int n : A){
            cur = (n & 1 << i) > 0? cur^1 : cur;
            ans += count[cur^1] * (1L << i);
            count[cur]++;
        }
    }
    cout<<ans;

}