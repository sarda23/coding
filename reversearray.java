import java.util.*;
public class reversearray{
 
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=scn.nextInt();

        int i=0,j=n-1;

        while(i<=j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;j--;
        }
        for(i=0;i<n;i++)
            System.out.print(arr[i]);
    }
}