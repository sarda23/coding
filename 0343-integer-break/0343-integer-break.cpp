class Solution {
public:
    int t[59];
    int solve(int n){
        if(n == 1)
            return 1;
        
        if(t[n] != -1)
            return t[n];
        
        int res = INT_MIN;
        
        for(int i=1;i<=n-1;i++){
            int prod = i*max(n-i,solve(n-i));
            res = max(res,prod);
        }
        
        return t[n] = res;
    }
    
    int integerBreak(int n) {
        memset(t,-1,sizeof(t));
        return solve(n);
    }
};