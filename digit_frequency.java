import java.util.*;
public class digit_frequency{
    public static int solve(int n,int d){
        int ans=0;
        while(n>0){
            if(d==n%10)
                ans++;
            n=n/10;
        }
        return ans;
    }
    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int d=scn.nextInt();
        int ans = solve(n,d);
        System.out.println(ans);
    }
}