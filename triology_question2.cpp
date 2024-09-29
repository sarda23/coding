public static void main(String[] args) {
       int[] a={1,2,3,4};
        //int[] a={1,2,1};
        //int b=1;
        int b=2;
        int[][] dp=new int[a.length+1][b+1];
        for(int[] t:dp)
            Arrays.fill(t,-1);

        int[] pre=new int[a.length];
        int sum=0;
        int i=0;
        for(int t:a)
        {   sum+=t;
            pre[i]=sum;
            i++;
        }
        int ans=f(0,a,b,pre,dp);
        System.out.println(ans);
    }
    public static int f(int i,int[] a,int b,int[] pre,int[][] dp)
    {

   
        if(i==a.length&&b==0)
        {
            return 0;
        }
        if(b==0||i==a.length)
        {
            return (int) 1e8;
        }
        if(dp[i][b]!=-1) return dp[i][b];

        int ans=(int)1e8;
        for(int k=i;k<a.length;k++)
        {
            int t= (int) (Math.pow(pre[k]-((i==0)?0:pre[i-1]),2)+f(k+1,a,b-1,pre,dp));

            ans=Math.min(ans,t);
        }

        return dp[i][b]=ans;
    }

    1 2 5 9   
    1 3 8 17  