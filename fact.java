import java.util.*;
public class fact{
   // use ctrl + k + c     for multiple comment
    
    public static int f(int n){
        int fans=1;
        for(int i=1;i<=n;i++)
            fans*=i;
        return fans;
    }
    public static void main(String[] args){
       Scanner scn = new Scanner(System.in);
       int n = scn.nextInt();
       int r = scn.nextInt();

       int nfact=f(n);
       int nrfact=f(n-r);      
       int npr=nfact/nrfact;
       System.out.println(npr);
    
        // Scanner scn = new Scanner(System.in);
        // int n = scn.nextInt();
        // int r = scn.nextInt();

        // int nfact=1;
        // for(int i=1;i<=n;i++)
        //     nfact*=i;
        // int nrfact=1;
        // for(int i=1;i<=n-r;i++)
        //     nrfact*=i;
        
        // int npr=nfact/nrfact;

        // System.out.println("the npr value is =" + npr);
    }
}