import java.util.*;
public class rotatearray{
    public static void reverse(int[]a,int i,int j){
        while(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;j--;
        }
    }
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=scn.nextInt();
        
        int k=scn.nextInt();
        k=k%n;
        if(k<0)
            k+=n;
        // part 1 reverse 0 to n-k-1
        reverse(arr,0,n-k-1);
        // part 2 reverse n-k to n-1
        reverse(arr,n-k,n-1);
        // final reverse the arr
        reverse(arr,0,n-1);

        // print the req
        for(int i=0;i<n;i++)
            System.out.print(" "+arr[i]);

    }
}