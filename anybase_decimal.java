import java.util.*;
public class anybase_decimal{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();

        int ans = solve(n,b);
        System.out.println(ans);
    }
    public static int solve(int n,int b){
        int ans=0;
        int p=1;
        while(n>0){
            int r = n%10;
            n=n/10;
            ans+=r*p;
            p*=b;
        }
        return ans;
    }
}