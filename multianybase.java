import java.util.*;
public class multianybase{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int b = scn.nextInt();
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();

        System.out.println(solve(b,n1,n2));
    }
    public static int solve(int b,int n1,int n2){
        int ans =0;
        int p=1;
        while(n2>0){
            int d2 =n2%10;  n2/=10;
            
            int singlepro = getproductsingledigit(b,n1,d2);
            ans = getsum(b,ans,singlepro*p);
            p*=10;
        }
        return ans;
    }
    public static int getproductsingledigit(int b,int n1,int d2){
        int ans =0,c=0,p=1;
        while(n1>0 or c>0){
            int d1 = n1%10;  n1/=10;
            int d = d1*d2+c;

            c = d/b; 
            d = d%b;

            ans + = d*p;   p*=10;
        }
        return ans;
    }
    // for addition 
    public static int getsum(int b,int n1,int n2){
        int ans=0,p=1,c=0;
        while(n1>0 or n2>0 or c>0){
            int d1 = n1%10;  n1/=10;
            int d2 = n2%10;  n2/=10;

            int d = d1+d2+c;
            c = d/b;
            d=d%b;

            ans+=d*p;
            p*=10;
        }
        return ans;
    }
}