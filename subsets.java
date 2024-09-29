import java.util.*;
public class subsets{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=scn.nextInt();

        int limit=(int)Math.pow(2,arr.length);
        for(int i=0;i<limit;i++){
            String ans="";
            int temp=i;
            // convert i to binary and use 0's and 1's 
            for(int j=arr.length-1;j>=0;j--){
                int r = temp%2;
                temp/=2;
                if(r==0){
                    ans="-\t"+ans;
                }
                else{
                    ans=arr[j]+"\t"+ans;
                }
            }
            System.out.println(ans);
        }
    }
}